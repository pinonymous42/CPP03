#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setName("ScavTrap");
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << getName() <<  ": ScavTrap's destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->setName(name);
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << this->getName() << " has already been destroyed" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap: " << this->getName() << " runs out of energy..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap: " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap):ClapTrap(scavtrap)
{
	std::cout << "ScavTrap's copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this != &scavtrap)	
		ClapTrap::operator=(scavtrap);
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << this->getName() << "ScavTrap: runs out of energy..." << std::endl;
		return ;
	}
	if (this->getHitPoints() <= 0)
	{
		std::cout << this->getName() << "ScavTrap: has already been broken..." << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap: " << this->getName() << " attacks " << target << ", causing " 
		<< this->getAttackDamage() << " points of damage!" << std::endl;
}