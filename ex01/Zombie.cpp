#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    this->_name = "Zombie";
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is dead." << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
    return this->_name;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
