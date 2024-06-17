#include "Zombie.hpp"

int main()
{
    Zombie *zombies = Zombie::zombieHorde(5, "Rodolfo");

    for (int i = 0; i < 5; i++)
        zombies[i].announce();

    delete[] zombies;
}