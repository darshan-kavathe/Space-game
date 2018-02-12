#include "spacecraft.h"
#include <cmath>

using ritcs::Spacecraft;
 
unsigned int Spacecraft::next_id = 1; 
Spacecraft::Spacecraft(const std::string &name):
	id(next_id++),
	name(name),
    warp(0),
    velocity(0),
    distance(0) {
	//Creating: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
	std::cout << "Creating: " << *this << std::endl;
}

Spacecraft::~Spacecraft() {
	//Destroying: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
	std::cout << "Destroying:" << *this << std::endl;
}

Spacecraft::Spacecraft(const Spacecraft &other):
        id(next_id++),
        name(other.name + " copy"),
        warp(0),
    	velocity(0),
    	distance(0) {
    //Copying: Spacecraft({id}){name={name}, warp={warp}, velocity={velocity}, distance={distance}}
    std::cout << "Copying: " << *this << std::endl;
}

double Spacecraft::fly(int time)	{
	// type of d, for this call only 
	double fly_distance = velocity * time;
	distance = distance + fly_distance;
	return fly_distance;
}

int Spacecraft::get_id()	const{
	return id;
}

double Spacecraft::get_light_years_travelled	() const{
	return distance;
}

std::string Spacecraft::get_name()const{
	return name;
}

unsigned int Spacecraft::get_speed()const{
	return velocity;
}

void Spacecraft::punch_it_chewy	(unsigned int warp_speed) {
	if (warp_speed < Spacecraft::MAX_WARP_SPEED){
		warp = warp_speed; // check for  MAX_WARP_SPEED
	}
	else{
		warp = Spacecraft::MAX_WARP_SPEED;
	}
}

std::ostream &ritcs::operator<<(std::ostream &os, const Spacecraft &s)	{
	 return os << "Spacecraft(" << s.id << "){" <<
       "name=" << s.name <<
       ", warp=" << s.warp <<
       ", velocity=" << s.velocity <<
       ", distance=" << s.distance <<
       "}";
}





