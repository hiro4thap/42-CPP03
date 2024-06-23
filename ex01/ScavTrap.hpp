/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:58:53 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 16:28:26 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_SCAV_TRAP_HPP
# define H_SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &rhs);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
};

#endif
