#include "Zombie.h"

void randomChump(std::string name) {
    Zombie* zombie = new Zombie(name);
    zombie->announce();
    delete zombie;
}
