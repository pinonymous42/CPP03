#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap &operator=(const ClapTrap& claptrap);
		ClapTrap(const std::string &name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) const;
		int	getHitPoints(void) const;
		int	getEnergyPoints(void) const;
		int	getAttackDamage(void) const;
	protected:
		void setName(const std::string& name);
		void setHitPoints(const unsigned int amount);
		void setEnergyPoints(const unsigned int amount);
		void setAttackDamage(const unsigned int amount);
	private:
		std::string _name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};
#endif