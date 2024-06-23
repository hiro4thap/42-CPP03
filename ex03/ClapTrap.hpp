/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:28:22 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 16:47:21 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CLAP_TRAP_HPP
# define H_CLAP_TRAP_HPP

# include <iostream>

class	ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string		getName();
	void			setName(std::string name);
	int		getHitPoint() const;
	void	setHitPoint(int hp);
	int		getEnergyPoint() const;
	void	setEnergyPoint(int ep);
	int		getAttackDamage() const;
	void	setAttackDamage(int ad);

protected:
	std::string		_name;
	unsigned int	_hit_point;
	unsigned int	_energy_point;
	unsigned int	_attack_damage;
};

#endif
