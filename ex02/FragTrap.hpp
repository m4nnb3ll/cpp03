#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string &name); // constructor
	~FragTrap(void); // destructor
	FragTrap(const FragTrap &fragTrap); // copier
	FragTrap	&operator=(const FragTrap& fragTrap); // assigner
	void		attack(const std::string& target);
	void		highFivesGuys(void);
};
