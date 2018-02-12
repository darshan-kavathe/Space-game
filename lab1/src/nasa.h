#ifndef NASA_H
#define NASA_H

#include <list>
#include <string>
#include <vector>
#include "spacecraft.h"

namespace ritcs {
class NASA {
public:
	static const unsigned int 	MAX_SHIPS = 10;
	NASA();
	~NASA ();
	void main_loop ();
};
}
#endif // NASA_H