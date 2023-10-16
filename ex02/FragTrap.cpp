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

FragTrap::FragTrap(const FragTrap &fragTrap)
	:	ClapTrap(fragTrap.m_name, fragTrap.m_hp, fragTrap.m_energy, fragTrap.m_atkDmg)
{
	std::cout << "FragTrap copied " << fragTrap.m_name << " constructor called!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& fragTrap)
{
	if (&fragTrap != this)
	{
		this->m_name = fragTrap.m_name;
		this->m_hp = fragTrap.m_hp;
		this->m_atkDmg = fragTrap.m_atkDmg;
		this->m_energy = fragTrap.m_energy;
		std::cout << "FragTrap " << fragTrap.m_name << " assign to " << this->m_name << std::endl;
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
	std::cout << "FragTrap is giving a high five!" << std::endl;
}