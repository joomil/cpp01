#include "Zombie.h"

int main() {
    int N = 5;
    std::string name = "Zombie";

    Zombie* horde = zombieHorde(N, name);

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
    delete[] horde; // Remember to delete the object to avoid memory leaks

    return (0);
}


/*

*/