# ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon&     weapon;  // Reference to weapon, not a copy
        std::string name;
    public:
        HumanA(std::string n_name, Weapon& n_weaponA);  // Take reference parameter
        void        attack(void);
};

# endif