#ifndef NASA_H
#define NASA_H

#include <list>
#include <string>
#include <vector>
#include "spacecraft.h"
using std::list;
namespace ritcs {
class NASA {
public:
	static const unsigned int 	MAX_SHIPS = 10;
	NASA();
	~NASA ();
	void main_loop ();
	list<Spacecraft*> base;
};
}
#endif // NASA_H