#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	:	ClapTrap("Undefined_clap_name", 100, 50, 30), m_name("Undefined")
{
	std::cout << "DiamondTrap got constructed!" << std::endl;
};

DiamondTrap::DiamondTrap(const std::string &name)
	:	ClapTrap(name + "_clap_name", 100, 50, 30), m_name(name)
{
	std::cout << "DiamondTrap got constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap got destructed!" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &scavTrap)
	:	ClapTrap(scavTrap.m_name, scavTrap.m_hp, scavTrap.m_energy, scavTrap.m_atkDmg)
{
	std::cout << "DiamondTrap copied " << scavTrap.m_name << " constructor called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& scavTrap)
{
	if (&scavTrap != this)
	{
		this->m_name = scavTrap.m_name;
		this->m_hp = scavTrap.m_hp;
		this->m_atkDmg = scavTrap.m_atkDmg;
		this->m_energy = scavTrap.m_energy;
		std::cout << "DiamondTrap " << scavTrap.m_name << " assign to " << this->m_name << std::endl;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << m_name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::m_name << std::endl;
}
