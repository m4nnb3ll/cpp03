#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string &name); // constructor
	virtual ~FragTrap(void); // destructor
	FragTrap(const FragTrap &scavTrap); // copier
	FragTrap		&operator=(const FragTrap& scavTrap); // assigner
	virtual void	attack(const std::string& target);
	void			highFivesGuys(void);
};
