#include "Zombie.h"

int main() {
    // Example usage of newZombie and randomChump
    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    randomChump("Bar");
    delete zombie; // Remember to delete the object to avoid memory leaks

    return (0);
}


/*

*/