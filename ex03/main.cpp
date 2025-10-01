#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);  // This will now work with reference
    bob.attack();
    club.setType("some other type of club");
    // std::cout << "The club.getType value ==> " << club.getType() << std::endl;
    bob.attack();
}
