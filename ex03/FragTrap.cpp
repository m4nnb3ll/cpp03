#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	:	ClapTrap("Undefined", 100, 100, 30)
{
	std::cout << "FragTrap got constructed!" << std::endl;
};

FragTrap::FragTrap(const std::string &name)
	:	ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap got constructed!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap got destructed!" << std::endl;
};

FragTrap::FragTrap(const FragTrap &scavTrap)
	:	ClapTrap(scavTrap.m_name, scavTrap.m_hp, scavTrap.m_energy, scavTrap.m_atkDmg)
{
	std::cout << "FragTrap copied " << scavTrap.m_name << " constructor called!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& scavTrap)
{
	if (&scavTrap != this)
	{
		this->m_name = scavTrap.m_name;
		this->m_hp = scavTrap.m_hp;
		this->m_atkDmg = scavTrap.m_atkDmg;
		this->m_energy = scavTrap.m_energy;
		std::cout << "FragTrap " << scavTrap.m_name << " assign to " << this->m_name << std::endl;
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	unsigned int	dmg_amnt = 0;

	if (!m_hp || !m_energy)
	{
		std::cout << m_name << " is out of energy or dead!" << std::endl;
		return ;
	}
	dmg_amnt = m_energy >= m_atkDmg ? m_atkDmg : 0;
	m_energy -= dmg_amnt;
	std::cout << "FragTrap " << m_name << " attacks " << target << " causing " << dmg_amnt << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << m_name << " is giving a high five!" << std::endl;
}