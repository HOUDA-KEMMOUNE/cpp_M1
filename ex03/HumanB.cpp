#include "HumanB.hpp"

HumanB::HumanB(std::string n_name)
{
	name = n_name;
}

void	HumanB::attack(void)
{
	weapon = new Weapon();
	if (!weapon)
		return ;
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon n_weapon)
{
	std::cout << "The type of n_weapon ==> " << n_weapon.getType() << std::endl;
	weapon = &n_weapon;
	std::cout << "The type of weapon ==> " << weapon->getType() << std::endl;
}
