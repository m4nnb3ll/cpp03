#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string &name); // constructor
	virtual ~ScavTrap(void); // destructor
	ScavTrap(const ScavTrap &scavTrap); // copier
	ScavTrap		&operator=(const ScavTrap& scavTrap); // assigner
	virtual void	attack(const std::string& target);
	void			guardGate(void);
};
