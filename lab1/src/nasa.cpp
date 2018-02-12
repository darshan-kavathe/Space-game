#include "nasa.h"
#include <iterator>
#include <sstream>
#include <cstdlib>

ritcs::NASA::NASA(){
	list<Spacecraft*> base;
}

ritcs::NASA::~NASA(){
	for(list<Spacecraft*>::const_iterator iter=base.begin();
        iter != base.end();
        ++iter) {
        delete *iter;
    }
}

void ritcs::NASA::main_loop(){
	std::string s;
	while (getline( cin, s )){
		std::stringstream ss(s);
		while(ss.good()){
			ss>> str;
			if (str == "create"):

			else if (str == "create"):

			else if (str == "copy"):

			else if (str == "create"):

			else if (str == "destroy"):

			else if (str == "distance"):

			else if (str == "fly"):
			else if (str == "list"):
			else if (str == "quit"):
			else if (str == "warp"):	

		}
	}
}
