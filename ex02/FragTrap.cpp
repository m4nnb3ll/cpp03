#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	:	ClapTrap()
{
	m_hp = 100;
	m_energy = 100;
	m_atkDmg = 30;
	std::cout << "FragTrap got constructed!" << std::endl;
};

FragTrap::FragTrap(const std::string &name)
{
	m_name = name;
	m_hp = 100;
	m_energy = 100;
	m_atkDmg = 30;
	std::cout << "FragTrap got constructed!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap got destructed!" << std::endl;
};

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	m_name = FragTrap.m_name;
	m_hp = FragTrap.m_hp;
	m_energy = FragTrap.m_energy;
	m_atkDmg = FragTrap.m_atkDmg;
	std::cout << "FragTrap copied " << FragTrap.m_name << " constructor called!" << std::endl;
}
FragTrap&	FragTrap::operator=(const FragTrap& FragTrap)
{
	if (&FragTrap != this)
	{
		this->m_name = FragTrap.m_name;
		this->m_hp = FragTrap.m_hp;
		this->m_atkDmg = FragTrap.m_atkDmg;
		this->m_energy = FragTrap.m_energy;
		std::cout << "FragTrap " << FragTrap.m_name << " assign to " << this->m_name << std::endl;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "a positive high fives request" << std::endl;
}