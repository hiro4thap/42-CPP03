/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:54:27 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 19:29:04 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DIAMOND_TRAP_HPP
# define H_DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public ClapTrap, public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &rhs);
	DiamondTrap &operator=(const DiamondTrap &rhs);
	~DiamondTrap();
	void	attack(const std::string& target): ScavTrap;
	void	whoAmI();

private:
	std::string		_name;
	ClapTrap::name;
	FragTrap::_hit_point;
	ScavTrap::_energy_point;
	FragTrap::_attack_damage;
};



#endif
