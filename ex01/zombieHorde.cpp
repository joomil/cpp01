#include "Zombie.h"
#include <sstream>

Zombie* zombieHorde(int N, std::string name) {
    // Allocating memory for N Zombies
    Zombie* horde = new Zombie[N];

    // Initialize each Zombie with the given name
    for (int i = 0; i < N; i++) {
        std::ostringstream oss;
        oss << name << " " << (i + 1);
        std::string zombieName = oss.str();

        horde[i] = Zombie(zombieName);
    }

    // Return a pointer to the first Zombie
    return (horde);
}