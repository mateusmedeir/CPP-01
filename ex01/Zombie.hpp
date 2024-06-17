#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    std::string getName();
    void setName(std::string name);
    void announce();
    static Zombie *zombieHorde(int N, std::string name);
};

#endif