#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string &name); // constructor
	virtual ~FragTrap(void); // destructor
	FragTrap(const FragTrap &fragTrap); // copier
	FragTrap		&operator=(const FragTrap& fragTrap); // assigner
	virtual void	attack(const std::string& target);
	void			highFivesGuys(void);
};
