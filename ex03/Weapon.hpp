# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string   &getType(void);
        void                set_type(std::string nt);
};

# endif