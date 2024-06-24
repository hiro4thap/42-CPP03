/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:58:53 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 17:28:13 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_SCAV_TRAP_HPP
# define H_SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &rhs);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate() const;
};

#endif
