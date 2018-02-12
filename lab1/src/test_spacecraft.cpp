#include "spacecraft.h"
#include <iostream>

using std::cout;
using std::endl;

using ritcs::Spacecraft;

/**
 * A test program that only verifies the signatures of the 
 * Spacecraft are correct.
 *
 * @author: Sean Strout @ RITCS
 */
int main() {
    // MAX_WARP_SPEED
    cout << "MAX_WARP_SPEED: " << Spacecraft::MAX_WARP_SPEED << endl;

    // SPEED_OF_LIGHT
    cout << "SPEED_OF_LIGHT: " << Spacecraft::SPEED_OF_LIGHT << endl;

    // LIGHT_YEAR
    cout << "LIGHT_YEAR: " << Spacecraft::LIGHT_YEAR << endl;

    // string constructor
    Spacecraft s1("Swordfish II");

    // operator<<
    cout << s1 << endl;

    // copy constructor
    Spacecraft s2 = s1;

    // get_name
    cout << "get_name: " << s2.get_name() << endl;

    // get_id
    cout << "get_id: " << s2.get_id() << endl;

    // get_speed
    cout << "get_speed: " << s2.get_speed() << endl;

    // get_light_years_travelled
    cout << "get_light_years_travelled: " << s2.get_light_years_travelled() << endl;

    // punch_it_chewy
    s2.punch_it_chewy(5);

    // fly
    s2.fly(120);
}

#if 0
MAX_WARP_SPEED: 10
SPEED_OF_LIGHT: 299792458
LIGHT_YEAR: 9.4607e+15
Creating: Spacecraft(1){name=Swordfish II, warp=0, velocity=0, distance=0}
Spacecraft(1){name=Swordfish II, warp=0, velocity=0, distance=0}
Copying: Spacecraft(2){name=Swordfish II copy, warp=0, velocity=0, distance=0}
get_name: Swordfish II copy
get_id: 2
get_speed: 0
get_light_years_travelled: 0
Destroying: Spacecraft(2){name=Swordfish II copy, warp=5, velocity=3.74741e+10, distance=4.49689e+12}
Destroying: Spacecraft(1){name=Swordfish II, warp=0, velocity=0, distance=0}
#endif

