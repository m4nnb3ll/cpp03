/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:56:13 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/16 10:27:50 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	:	m_name("NPC"),
		m_hp(10),
		m_energy(10),
		m_atkDmg(0)
{
	std::cout << "ClapTrap " << m_name << " Got Constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	:	m_name(name),
		m_hp(10),
		m_energy(10),
		m_atkDmg(0)
{
	std::cout << "ClapTrap " << name << " Got Constructed!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << m_name << " Got Destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
	:	m_name(claptrap.m_name),
		m_hp(claptrap.m_hp),
		m_energy(claptrap.m_energy),
		m_atkDmg(claptrap.m_atkDmg)
{
	std::cout << "ClapTrap copied " << claptrap.m_name << " constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (&claptrap != this)
	{
		this->m_name = claptrap.m_name;
		this->m_hp = claptrap.m_hp;
		this->m_atkDmg = claptrap.m_atkDmg;
		this->m_energy = claptrap.m_energy;
		std::cout << "ClapTrap " << claptrap.m_name << " assigned to " << this->m_name << std::endl;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	unsigned int	dmg_amnt = 0;

	if (!m_hp || !m_energy)
	{
		std::cout << m_name << " is out of energy or dead!" << std::endl;
		return ;
	}
	dmg_amnt = m_energy >= m_atkDmg ? m_atkDmg : 0;
	m_energy -= dmg_amnt;
	std::cout << "ClapTrap " << m_name << " attacks " << target << " causing " << dmg_amnt << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	dmg_amnt = 0;

	if (!m_hp || !m_energy)
	{
		std::cout << m_name << " is out of energy or dead!" << std::endl;
		return ;
	}
	dmg_amnt = m_hp >= amount ? amount : m_hp;
	m_hp -= dmg_amnt;
	std::cout << "ClapTrap " << m_name << " takes " << dmg_amnt << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	dmg_amnt = 0;

	if (!m_hp || !m_energy)
	{
		std::cout << m_name << " is out of energy or dead!" << std::endl;
		return ;
	}
	dmg_amnt = m_energy >= amount ? amount : 0;
	m_energy -= dmg_amnt;
	std::cout << "ClapTrap " << m_name << " repairs " << dmg_amnt << " points of damage!" << std::endl;
}
