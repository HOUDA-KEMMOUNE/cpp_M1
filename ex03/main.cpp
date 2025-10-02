#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);  // This will now work with reference
        bob.attack();
        club.setType("some other type of club");
        // std::cout << "The club.getType value ==> " << club.getType() << std::endl;
        bob.attack();
    }
    std::cout << std::endl;
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        // jim.setWeapon(club);
        // std::cout << "Test\n";
        jim.attack();
        club.setType("Some other type of club");
        jim.attack();
    }
}
