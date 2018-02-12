#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <iostream>
#include <string>

namespace ritcs {
class Spacecraft {
public:

	static const unsigned int 	MAX_WARP_SPEED = 10;
	static const long 	SPEED_OF_LIGHT = 299792458L;
	static const double 	LIGHT_YEAR = 9.4607e15;
	// comment header files
	Spacecraft (const std::string & name);
	~ Spacecraft ();
	Spacecraft (const Spacecraft & other);	
	string get_name () const;
	int get_id () const;
	unsigned int get_speed () const;
	double get_light_years_travelled () const;
	void punch_it_chewy (unsigned int warp_speed);
	double fly (int time);
	// does it have to be private
	friend std::ostream & 	operator<< (std::ostream &os, const Spacecraft &s);

};
std::ostream & 	operator<< (std::ostream &os, const Spacecraft &s);
}
#endif // SPACECRAFT_H