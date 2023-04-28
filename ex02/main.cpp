#include "FragTrap.hpp"

int main(void)
{	
	FragTrap a("no.1");
	FragTrap b("no.2");
	FragTrap c(a);
	FragTrap d;

	d = b;
	
	std::cout << std::endl;
	std::cout << "---a status---" << std::endl;
	std::cout << "Name:" << a.getName() << std::endl;
	std::cout << "HP:" << a.getHitPoints() << std::endl;
	std::cout << "EP:" << a.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << a.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---b status---" << std::endl;
	std::cout << "Name:" << b.getName() << std::endl;
	std::cout << "HP:" << b.getHitPoints() << std::endl;
	std::cout << "EP:" << b.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << b.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(1);

	while (a.getEnergyPoints() != 0 && b.getHitPoints() != 0)
	{
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
	}
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	std::cout << "---a status---" << std::endl;
	std::cout << "Name:" << a.getName() << std::endl;
	std::cout << "HP:" << a.getHitPoints() << std::endl;
	std::cout << "EP:" << a.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << a.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---b status---" << std::endl;
	std::cout << "Name:" << b.getName() << std::endl;
	std::cout << "HP:" << b.getHitPoints() << std::endl;
	std::cout << "EP:" << b.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << b.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << std::endl;
	std::cout << "----copy----" << std::endl;
	std::cout << std::endl;
	std::cout << "---c status---" << std::endl;
	std::cout << "Name:" << c.getName() << std::endl;
	std::cout << "HP:" << c.getHitPoints() << std::endl;
	std::cout << "EP:" << c.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << c.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---d status---" << std::endl;
	std::cout << "Name:" << d.getName() << std::endl;
	std::cout << "HP:" << d.getHitPoints() << std::endl;
	std::cout << "EP:" << d.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << d.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.beRepaired(1);

	while (c.getEnergyPoints() != 0 && d.getHitPoints() != 0)
	{
		c.attack(d.getName());
		d.takeDamage(c.getAttackDamage());
	}
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());		
	std::cout << std::endl;
	std::cout << "---c status---" << std::endl;
	std::cout << "Name:" << c.getName() << std::endl;
	std::cout << "HP:" << c.getHitPoints() << std::endl;
	std::cout << "EP:" << c.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << c.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---d status---" << std::endl;
	std::cout << "Name:" << d.getName() << std::endl;
	std::cout << "HP:" << d.getHitPoints() << std::endl;
	std::cout << "EP:" << d.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << d.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	c.highFivesGuys();
	d.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
