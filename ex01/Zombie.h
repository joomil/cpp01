#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string n);
    void announce(void);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_H
