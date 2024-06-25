/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:26:51 by dev               #+#    #+#             */
/*   Updated: 2024/06/25 15:42:11 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap()
{
	_name = "blank";
	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_hit_point = 100;
	ScavTrap::_energy_point = 50;
	FragTrap::_attack_damage = 30;
	std::cout << "DiamondTrap " << _name << " is constructed" << "\n";
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_hit_point = 100;
	ScavTrap::_energy_point = 50;
	FragTrap::_attack_damage = 30;
	std::cout << "DiamondTrap " << _name << " is constructed" << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs): ScavTrap(rhs), FragTrap(rhs)
{
	_name = rhs._name;
	ClapTrap::_name = rhs.ClapTrap::_name;
	FragTrap::_hit_point = rhs.FragTrap::_hit_point;
	ScavTrap::_energy_point = rhs.ScavTrap::_energy_point;
	FragTrap::_attack_damage = rhs.FragTrap::_attack_damage;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " is destructed" << "\n";
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);	
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "I am DiamondTrap " << _name << "\n";
	std::cout << "I am ClapTrap " << ClapTrap::_name << "\n";
}


std::string		DiamondTrap::getName() const
{
	return _name;
}

void			DiamondTrap::setName(std::string name)
{
	_name = name;
}
