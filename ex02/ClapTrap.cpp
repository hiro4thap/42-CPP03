/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:28:26 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 17:30:03 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "blank";
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " is constructed" << "\n";
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " is constructed" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
		*this = ClapTrap(rhs);
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destructed" << "\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_hit_point)
		std::cout << "ClapTrap " << _name << " is dead and cannot attack" << "\n";
	else if (!_energy_point)
		std::cout << "ClapTrap " << _name << " has no energy points and failed to attack" << "\n";
	else
	{
		_energy_point--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << "\n";
	}
}
	
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hit_point)
		std::cout << "ClapTrap " << _name << " is dead and cannot take damage" << "\n";
	else if (_hit_point < amount)
	{
		_hit_point = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, and the hit point is currently " << _hit_point << "\n";
	}
	else
	{
		_hit_point -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, and the hit point is currently " << _hit_point << "\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hit_point)
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired" << "\n";
	else if (!_energy_point)
		std::cout << "ClapTrap " << _name << " has no energy points and failed to be repaired" << "\n";
	else
	{
		_energy_point--;
		_hit_point += amount;
		std::cout << "ClapTrap " << _name << " is repaired " << amount << " of points, and the hit points is currently " << _hit_point <<  "\n";
	}
}

std::string		ClapTrap::getName() const
{
	return _name;
}

void	ClapTrap::setName(std::string name)
{
	std::cout << _name << "'s name is set to ";
	_name = name;
	std::cout << _name << " by using setter" << "\n";
}

int		ClapTrap::getHitPoint() const
{
	return _hit_point;
}

void	ClapTrap::setHitPoint(int hp)
{
	_hit_point = hp;
	std::cout << _name << "'s hit points is set to " << _hit_point << " by using setter" << "\n";
}

int		ClapTrap::getEnergyPoint() const
{
	return _energy_point;
}

void	ClapTrap::setEnergyPoint(int ep)
{
	_energy_point = ep;
	std::cout << _name << "'s energy points is set to " << _energy_point << " by using setter" << "\n";
}

int		ClapTrap::getAttackDamage() const
{
	return _attack_damage;
}

void	ClapTrap::setAttackDamage(int ad)
{
	_attack_damage = ad;
	std::cout << _name << "'s attack damage is set to " << _attack_damage << " by using setter" << "\n";
}
