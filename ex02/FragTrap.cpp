/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:58:49 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 16:59:52 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "ClapTrap " << _name << " has changed to FragTrap" << "\n";
}

FragTrap::FragTrap(const FragTrap &rhs): ClapTrap(rhs)
{
	*this = rhs;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
		*this = FragTrap(rhs);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has changed to ClapTrap" << "\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (!_hit_point)
		std::cout << "FragTrap " << _name << " is dead and cannot attack" << "\n";
	else if (!_energy_point)
		std::cout << "FragTrap " << _name << " has no energy points and failed to attack" << "\n";
	else
	{
		--_energy_point;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << "\n";
	}
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " has requested high five" << "\n";
}
