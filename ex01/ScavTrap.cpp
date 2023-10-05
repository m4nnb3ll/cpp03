#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	:	ClapTrap()
{
	m_hp = 100;
	m_energy = 50;
	m_atkDmg = 20;
	std::cout << "ScavTrap got constructed!" << std::endl;
};

ScavTrap::ScavTrap(const std::string &name)
{
	m_name = name;
	m_hp = 100;
	m_energy = 50;
	m_atkDmg = 20;
	std::cout << "ScavTrap got constructed!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap got destructed!" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	m_name = scavTrap.m_name;
	m_hp = scavTrap.m_hp;
	m_energy = scavTrap.m_energy;
	m_atkDmg = scavTrap.m_atkDmg;
	std::cout << "ScavTrap copied " << scavTrap.m_name << " constructor called!" << std::endl;
}
ScavTrap&	ScavTrap::operator=(const ScavTrap& scavTrap)
{
	if (&scavTrap != this)
	{
		this->m_name = scavTrap.m_name;
		this->m_hp = scavTrap.m_hp;
		this->m_atkDmg = scavTrap.m_atkDmg;
		this->m_energy = scavTrap.m_energy;
		std::cout << "ScavTrap " << scavTrap.m_name << " assign to " << this->m_name << std::endl;
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}