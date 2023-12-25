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

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
	:	ClapTrap(diamondTrap.m_name, diamondTrap.m_hp, diamondTrap.m_energy, diamondTrap.m_atkDmg)
{
	std::cout << "DiamondTrap copied " << diamondTrap.m_name << " constructor called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	if (&diamondTrap != this)
	{
		this->m_name = diamondTrap.m_name;
		this->m_hp = diamondTrap.m_hp;
		this->m_atkDmg = diamondTrap.m_atkDmg;
		this->m_energy = diamondTrap.m_energy;
		std::cout << "DiamondTrap " << diamondTrap.m_name << " assign to " << this->m_name << std::endl;
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
