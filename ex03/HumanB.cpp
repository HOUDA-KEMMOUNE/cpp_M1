#include "HumanB.hpp"

HumanB::HumanB(std::string n_name)
{
	weapon = NULL;
	name = n_name;
}

void	HumanB::attack(void)
{
	// weapon = new Weapon();
	if (!weapon)
	{
		std::cout << name << " has no weapon !\n";
		return ;
	}
	// weapon->setType("HHHHH");
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &n_weapon)
{
	// weapon = new Weapon();
	// if (!weapon)
	// 	return ;

	weapon = &n_weapon;
}
