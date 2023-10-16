#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	:	ClapTrap("Undefined", 100, 50, 20)
{
	std::cout << "ScavTrap got constructed!" << std::endl;
};

ScavTrap::ScavTrap(const std::string &name)
	:	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap got constructed!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap got destructed!" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
	:	ClapTrap(scavTrap.m_name, scavTrap.m_hp, scavTrap.m_energy, scavTrap.m_atkDmg)
{
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

void	ScavTrap::attack(const std::string& target)
{
	unsigned int	dmg_amnt = 0;

	if (!m_hp || !m_energy)
	{
		std::cout << m_name << " is out of energy or dead!" << std::endl;
		return ;
	}
	dmg_amnt = m_energy >= m_atkDmg ? m_atkDmg : 0;
	m_energy -= dmg_amnt;
	std::cout << "ScavTrap " << m_name << " attacks " << target << " causing " << dmg_amnt << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}