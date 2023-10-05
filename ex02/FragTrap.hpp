#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string &name); // constructor
	~FragTrap(void); // destructor
	FragTrap(const FragTrap &FragTrap); // copier
	FragTrap	&operator=(const FragTrap& FragTrap); // assigner
	void		highFivesGuys(void);
};
