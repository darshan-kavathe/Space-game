#include "nasa.h"
#include <iterator>
#include <sstream>
#include <cstdlib>

using std::list;
using ritcs::NASA;
NASA::NASA(){
}

NASA::~NASA(){
	for(list<Spacecraft*>::const_iterator iter=base.begin();
        iter != base.end();
        ++iter) {
        delete *iter;
    }
}

void NASA::main_loop(){
	double total_distance =0.0;
	std::string s;
	while (getline( std::cin, s )){
		std::stringstream ss(s);
		while(ss.good()){
			std::string str;
			ss>> str;
			if (str == "create"){
				std::string name;
				ss>> name;
				base.push_back(new Spacecraft(name));
			}

			else if (str == "copy"){
				int index;
				ss>> index;
				for (list<Spacecraft*>::const_iterator iter=base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
            			base.push_back(new Spacecraft(**iter));
            			break;
        			}
    			} 
			}

			else if (str == "destroy"){
				int index;
				ss>> index;				
				for (list<Spacecraft*>::const_iterator iter=base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
            			delete *iter;
            			break;
        			}
    			} 
			}

			else if (str == "distance"){
				int index;
				ss>> index;				
				for (list<Spacecraft*>::const_iterator iter= base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
            			std::cout << (**iter).get_name()<<" has flown "(**iter).get_light_years_travelled()<<" light years"<< std::endl;
            			break;
        			}
    			}
			}

			else if (str == "fly"){
				int index;
				int time;

				ss>> index;				
				for (list<Spacecraft*>::const_iterator iter= base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
        				double curr_dist = (**iter).fly(time);
        				total_distance = total_distance + curr_dist;
            			std::cout << (**iter).get_name()<<" flies "<<time<< " seconds for "<<curr_dist<<" light years"<< std::endl;
            			break;
        			}
    			}
			}

			else if (str == "list"){
				int index;
				int time;

				ss>> index;				
				for (list<Spacecraft*>::const_iterator iter= base.begin(); 
        			iter != base.end();     
        			++iter) {
        			std::cout << *iter<< std::endl;
    			}
			}

			else if (str == "print"){
				int index;
				ss>> index;
				for (list<Spacecraft*>::const_iterator iter= base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
        				std::cout << *iter<< std::endl;
        			}
        		}
			}
			else if (str == "warp"){
				int index;
				unsigned int warp_s;
				ss>> index;
				ss>> warp_s;
				for (list<Spacecraft*>::const_iterator iter= base.begin(); 
        			iter != base.end();     
        			++iter) {
        			if ((**iter).get_id() == index) {
        				std::cout << (**iter).get_name()<<" set to warp speed "(**iter).punch_it_chewy(warp_s)<< std::endl;
        			}
        		}
			}

			else if	(str == "quit"){
				std::cout<<"All ships have flown a total of "<< total_distance <<" light years"<< std::endl;
			}

			else{
				std::cout<<"Unrecognized command: "<< ss;
			}
		}
	}
}
