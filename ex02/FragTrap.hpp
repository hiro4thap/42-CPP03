/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:58:53 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 17:32:42 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_FRAG_TRAP_HPP
# define H_FRAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	FragTrap: public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &rhs);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();
	void	attack(const std::string& target);
	void	highFiveGuys(void) const;
};

#endif
