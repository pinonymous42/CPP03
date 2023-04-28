#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("no.1");
	ClapTrap b("no.2");
	ClapTrap c(a);
	ClapTrap d;

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

	int count = 0;
	while (a.getEnergyPoints() != 0 && a.getHitPoints() != 0)
	{
		std::cout << count + 1 << ": ";
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		count++;
	}
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	
	a.attack(c.getName());
	a.beRepaired(1);
	
	std::cout << std::endl;
	std::cout << "---copy----" << std::endl;
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
	c.attack(b.getName());
	d.takeDamage(a.getAttackDamage());
	d.beRepaired(2);

	count = 0;
	while (c.getEnergyPoints() != 0 && c.getHitPoints() != 0)
	{
		std::cout << count + 1 << ": ";
		c.attack(b.getName());
		d.takeDamage(a.getAttackDamage());
		count++;
	}
	c.attack(b.getName());
	d.takeDamage(a.getAttackDamage());
	
	c.attack(c.getName());
	c.beRepaired(4);
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
	return (0);
}
