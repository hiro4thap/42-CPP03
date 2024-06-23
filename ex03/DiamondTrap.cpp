/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:26:51 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 19:55:51 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//private:
//	std::string		_name;
//	ClapTrap::name;
//	FragTrap::_hit_point;
//	ScavTrap::_energy_point;
//	FragTrap::_attack_damage;

DiamondTrap::DiamondTrap(void)
{
	_name = "blank";
	ClapTrap::_name = "blank";
	FragTrap::_hit_point = 20;
	ScavTrap::_energy_point = 30;
	FragTrap::_attack_damage = 100;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name;
	FragTrap::_hit_point = 20;
	ScavTrap::_energy_point = 30;
	FragTrap::_attack_damage = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
	_name = rhs._name;
	ClapTrap::_name = rhs.ClapTrap::_name;
	FragTrap::_hit_point = rhs.FragTrap::_hit_point;
	ScavTrap::_energy_point = rhs.ScavTrap::_energy_point;
	FragTrap::_attack_damage = rhs.FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap &operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
		*this = rhs;
}

DiamondTrap::~DiamondTrap();
void	DiamondTrap::attack(const std::string& target): ScavTrap;
void	DiamondTrap::whoAmI();


