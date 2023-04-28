#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &diamondtrap);
		DiamondTrap &operator=(const DiamondTrap &diamondtrap);
		DiamondTrap(const std::string &name);
		void	attack(const std::string &target);
		void	whoAmI(void) const;
		virtual std::string getName(void) const;
	private:
		std::string _name;
};
#endif