#include "Zombie.hpp"

int main()
{
    Zombie zombie1 = Zombie("Rodrigo");
    zombie1.announce();

    Zombie *zombie2 = Zombie::newZombie("Rodolfo");
    zombie2->announce();

    Zombie::randomChump("Marcelo");
    delete zombie2;
}