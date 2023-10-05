#pragma once

# include <iostream>
// # include <string> comment tmp until an error appears

class ClapTrap
{
protected:
	std::string		m_name;
	unsigned int	m_hp;
	unsigned int	m_energy;
	unsigned int	m_atkDmg;
public:
	ClapTrap(void);
	ClapTrap(const std::string &name); // constructor
	~ClapTrap(void); // destructor
	ClapTrap(const ClapTrap &claptrap); // copier
	ClapTrap	&operator=(const ClapTrap& claptrap); // assigner
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		printStats(void);//to remove later
};
