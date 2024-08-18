#include <iostream>
#include "Zombie.h"

Zombie::Zombie(std::string n) : name(n) {}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

Zombie::Zombie() : name("Default Name") {}
