#include "nasa.h"

using ritcs::NASA;

/**
 * The main program for the NASA spaceship simulator.
 *
 * @return 0 on normal exit
 *
 * @author Sean Strout @ RITCS
 */
int main() {
    NASA nasa;
    nasa.main_loop();
    return 0;
}	
