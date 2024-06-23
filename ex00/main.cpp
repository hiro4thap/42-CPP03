/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:12 by dev               #+#    #+#             */
/*   Updated: 2024/06/23 13:27:57 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "--- Construct ---" << "\n";
	ClapTrap	Aden("Aden");
	std::cout << "--- HP and EP are more than 0 ---" << "\n";
	Aden.attack("Ben");
	Aden.beRepaired(5);
	Aden.takeDamage(10);
	Aden.setAttackDamage(10);
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");

	std::cout << "--- EP is 0 ---" << "\n";
	Aden.attack("Ben");
	Aden.beRepaired(5);
	Aden.takeDamage(10);

	std::cout << "--- HP is 0 ---" << "\n";
	Aden.attack("Ben");
	Aden.beRepaired(5);
	Aden.takeDamage(10);
	std::cout << "--- Destruct ---" << "\n";
}
