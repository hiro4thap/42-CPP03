/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:58:49 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 16:48:27 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "ClapTrap " << _name << " has changed to ScavTrap" << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &rhs): ClapTrap(rhs)
{
	*this = rhs;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
		*this = ScavTrap(rhs);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has changed to ClapTrap" << "\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_hit_point)
		std::cout << "ScavTrap " << _name << " is dead and cannot attack" << "\n";
	else if (!_energy_point)
		std::cout << "ScavTrap " << _name << " has no energy points and failed to attack" << "\n";
	else
	{
		--_energy_point;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << "\n";
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now gate keeper mode" << "\n";
}
