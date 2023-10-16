#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string &name); // constructor
	~ScavTrap(void); // destructor
	ScavTrap(const ScavTrap &scavTrap); // copier
	ScavTrap	&operator=(const ScavTrap& scavTrap); // assigner
	void		attack(const std::string& target);
	void		guardGate(void);
};
