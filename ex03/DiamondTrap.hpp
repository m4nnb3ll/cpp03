#pragma once

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(const std::string &name); // constructor
	~DiamondTrap(void); // destructor
	DiamondTrap(const DiamondTrap &diamondTrap); // copier
	DiamondTrap	&operator=(const DiamondTrap& diamondTrap); // assigner
	void		attack(const std::string& target);
	void		whoAmI();
private:
	std::string	m_name;//shadowing claptrap's
};
