#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		ScavTrap(const std::string &name);
		void	attack(const std::string &target);
		void	guardGate(void) const;
	protected:
		static const unsigned int _hit_points = 100;
		static const unsigned int _energy_points = 50;
		static const unsigned int _attack_damage = 20;
};
#endif