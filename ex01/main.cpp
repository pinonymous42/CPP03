#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap sa("no.1");
	ScavTrap sb("no.2");
	ScavTrap sc(sa);
	ScavTrap sd;

	sd = sb;
	
	std::cout << std::endl;
	std::cout << "---a status---" << std::endl;
	std::cout << "Name:" << sa.getName() << std::endl;
	std::cout << "HP:" << sa.getHitPoints() << std::endl;
	std::cout << "EP:" << sa.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sa.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---b status---" << std::endl;
	std::cout << "Name:" << sb.getName() << std::endl;
	std::cout << "HP:" << sb.getHitPoints() << std::endl;
	std::cout << "EP:" << sb.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sb.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;

	sa.attack(sb.getName());
	sb.takeDamage(sa.getAttackDamage());
	sb.beRepaired(1);

	int count = 0;
	while (sa.getEnergyPoints() != 0 && sb.getHitPoints() != 0)
	{
		std::cout << count + 1 << ": ";
		sa.attack(sb.getName());
		sb.takeDamage(sa.getAttackDamage());
		count++;
	}
	sa.attack(sb.getName());
	sb.takeDamage(sa.getAttackDamage());
	std::cout << std::endl;
	std::cout << "---a status---" << std::endl;
	std::cout << "Name:" << sa.getName() << std::endl;
	std::cout << "HP:" << sa.getHitPoints() << std::endl;
	std::cout << "EP:" << sa.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sa.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---b status---" << std::endl;
	std::cout << "Name:" << sb.getName() << std::endl;
	std::cout << "HP:" << sb.getHitPoints() << std::endl;
	std::cout << "EP:" << sb.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sb.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	sa.guardGate();
	sb.guardGate();
	std::cout << std::endl;
	std::cout << "----copy----" << std::endl;
	std::cout << std::endl;
	std::cout << "---c status---" << std::endl;
	std::cout << "Name:" << sc.getName() << std::endl;
	std::cout << "HP:" << sc.getHitPoints() << std::endl;
	std::cout << "EP:" << sc.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sc.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---d status---" << std::endl;
	std::cout << "Name:" << sd.getName() << std::endl;
	std::cout << "HP:" << sd.getHitPoints() << std::endl;
	std::cout << "EP:" << sd.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sd.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	
	sc.attack(sd.getName());
	sd.takeDamage(sc.getAttackDamage());
	sd.beRepaired(1);

	count = 0;
	while (sc.getEnergyPoints() != 0 && sd.getHitPoints() != 0)
	{
		std::cout << count + 1 << ": ";
		sc.attack(sd.getName());
		sd.takeDamage(sc.getAttackDamage());
	}
	sc.attack(sd.getName());
	sd.takeDamage(sc.getAttackDamage());
	std::cout << std::endl;
	std::cout << "---c status---" << std::endl;
	std::cout << "Name:" << sc.getName() << std::endl;
	std::cout << "HP:" << sc.getHitPoints() << std::endl;
	std::cout << "EP:" << sc.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sc.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "---d status---" << std::endl;
	std::cout << "Name:" << sd.getName() << std::endl;
	std::cout << "HP:" << sd.getHitPoints() << std::endl;
	std::cout << "EP:" << sd.getEnergyPoints() << std::endl;
	std::cout << "ATK:" << sd.getAttackDamage() << std::endl;
	std::cout << "--------------" << std::endl;
	sc.guardGate();
	sd.guardGate();
	
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}