#include "spacecraft.h"
#include <cmath>

unsigned int ritcs::Spacecraft::Spacecraft::next_id = 1; // add this to header file
ritcs::Spacecraft::Spacecraft(const std::string & name):
	id(next_id++),
	name(name),
    warp(0),
    velocity(0),
    distance(0) {
	//Creating: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
	std::cout << "Creating: " << *this << endl;
}

ritcs::Spacecraft::~Spacecraft() {
	//Destroying: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
	std::cout << "Destroying:" << *this << endl;
}

ritcs::Spacecraft::Spacecraft(const Spacecraft & other):
        id(next_id++),
        name(other.name.append(" copy")),
        warp(0),
    	velocity(0),
    	distance(0) {
    //Copying: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
    std::cout << "Copying: " << *this << endl;
}

double ritcs::Spacecraft::fly(int time)	{
	// type of d, for this call only 
	double fly_distance = velocity * time;
	return fly_distance;
}

int ritcs::Spacecraft::get_id()	const{
	return id;
}

double ritcs::Spacecraft::get_light_years_travelled	() const{
	return distance;
}

string ritcs::Spacecraft::get_name()const{
	return name;
}

unsigned int ritcs::Spacecraft::get_speed()	const{
	return velocity;
}

void ritcs::Spacecraft::punch_it_chewy	(unsigned int warp_speed) {
	warp = warp_speed; // check for  MAX_WARP_SPEED
}

ostream& operator<<	(ostream &os, const Spacecraft &s)	{
	 return os << "Spacecraft(" << s.id << "){" <<
       "name=" << s.name_ <<
       ", warp=" << s.warp <<
       ", velocity=" << s,velocity <<
       ", distance=" << s.distance <<
       "}";
}





