#include "Harl.hpp"

int harl_level(char *complain)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (complain == levels[i])
            return i + 1;
    }
    return 0;
}

void harl_complain(std::string level)
{
    Harl harl;

    std::cout << "[" << level << "]\n";
    harl.complain(level);
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    Harl harl;

    if (argc != 2)
        return 0;
    switch (harl_level(argv[1]))
    {
    case 1:
        harl_complain("DEBUG");
        /* FALLTHROUGH */
    case 2:
        harl_complain("INFO");
        /* FALLTHROUGH */
    case 3:
        harl_complain("WARNING");
        /* FALLTHROUGH */
    case 4:
        harl_complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
    return 0;
}