#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = new Weapon("Fists");
}

HumanB::~HumanB() {}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

Weapon *HumanB::getWeapon()
{
    return this->_weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}