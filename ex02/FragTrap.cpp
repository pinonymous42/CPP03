#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setName("FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap's default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << ": FragTrap's Destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap's default constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << this->getName() << " has already been destroyed" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << this->getName() << " runs out of energy..." << std::endl;
		return ;
	}
	std::cout << this->getName() << " requests a positive highfive" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap):ClapTrap(fragtrap)
{
	std::cout << "FrafTrap's copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
		ClapTrap::operator=(fragtrap);
	return (*this);
}