#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name):_hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->_name = name;
	std::cout << "ClapTrap's default constructor called" << std::endl;
}

ClapTrap::ClapTrap():_name("ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap's default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->getName() << ": ClapTrap's destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap's copy constructor called" << std::endl;
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
	{
		this->_name = claptrap.ClapTrap::getName();
		this->_hit_points = claptrap.getHitPoints();
		this->_energy_points = claptrap.getEnergyPoints();
		this->_attack_damage = claptrap.getAttackDamage();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0)
	{
		std::cout << this->getName() << "ClapTrap: has already been broken..." << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << this->getName() << "ClapTrap: runs out of energy..." << std::endl;
		return ;
	}
	this->_energy_points -= 1;
	std::cout << "ClapTrap: " << this->getName() << " attacks " << target << ", causing " 
		<< this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << this->getName() << " has already been destroyed..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
	if (static_cast<int>(amount) >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap: " << this->getName() << " has been destroyed..." << std::endl;
		return ;
	}
	this->_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap: " << this->getName() << " runs out of energy..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap: " << this->getName() << "has already been broken..." << std::endl;
		return ;
	}
	this->_energy_points -= 1;
	this->_hit_points += amount;
	std::cout << "ClapTrap: " << this->getName() << " is repaired, get " << amount << " points back!" << std::endl;
}

void ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(const unsigned int amount)
{
	this->_hit_points = amount;
}

void ClapTrap::setEnergyPoints(const unsigned int amount)
{
	this->_energy_points = amount;
}

void ClapTrap::setAttackDamage(const unsigned int amount)
{
	this->_attack_damage = amount;
}

std::string ClapTrap::getName(void) const
{
	// std::cout << __FILE__ << " " << __LINE__ << std::endl;
	// std::cout << this->_name << std::endl;
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}