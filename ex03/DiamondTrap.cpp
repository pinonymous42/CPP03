#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap_clap_name"), ScavTrap("DiamondTrap_clap_name"), _name("DiamondTrap")
{
	std::cout << "DiamondTrap's default constructor called" << std::endl;
	this->setHitPoints(FragTrap::_hit_points);
	this->setEnergyPoints(ScavTrap::_energy_points);
	this->setAttackDamage(FragTrap::_attack_damage);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->getName() << ": DiamondTrap's destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap):ClapTrap(diamondtrap), FragTrap(diamondtrap), ScavTrap(diamondtrap), _name(diamondtrap.getName())
{
	// ClapTrap::setName(ClapTrap::getName() + "_clap_name");
	std::cout << "DiamondTrap's copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	if (this != &diamondtrap)
	{
		ClapTrap::operator=(diamondtrap);
		this->_name = diamondtrap.getName();
		// ClapTrap::setName(ClapTrap::getName() + "_clap_name");
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string &name):ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap's default constructor called" << std::endl;
	// std::cout << this->_name << std::endl;
	this->setHitPoints(FragTrap::_hit_points);
	this->setEnergyPoints(ScavTrap::_energy_points);
	this->setAttackDamage(FragTrap::_attack_damage);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap's name is " << this->getName() << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::getName() << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return (this->_name);
}