#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);
		~FragTrap();
		FragTrap(const std::string &name);
		void highFivesGuys(void) const;
	protected:
		static const unsigned int _hit_points = 100;
		static const unsigned int _energy_points = 100;
		static const unsigned int _attack_damage = 30;
};
#endif