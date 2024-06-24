/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:54:27 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 15:23:25 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DIAMOND_TRAP_HPP
# define H_DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &rhs);
	DiamondTrap &operator=(const DiamondTrap &rhs);
	~DiamondTrap();
	void	attack(const std::string& target);
	void	whoAmI() const;

private:
	std::string		_name;
};

#endif
