/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:12 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 15:33:44 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Aden("Aden");
	std::cout << "--- HP and EP are more than 0 ---" << "\n";
	Aden.highFiveGuys();
	Aden.attack("Ben");
	Aden.setAttackDamage(10);
	Aden.setEnergyPoint(3);
	Aden.attack("Ben");
	Aden.attack("Ben");
	Aden.attack("Ben");

	std::cout << "--- EP is 0 ---" << "\n";
	Aden.attack("Ben");
	Aden.setHitPoint(0);

	std::cout << "--- HP is 0 ---" << "\n";
	Aden.attack("Ben");
	std::cout << "--- Destruct ---" << "\n";
	Aden.whoAmI();

	Aden.ClapTrap::attack("something1");
	Aden.ScavTrap::attack("something2");
	Aden.FragTrap::attack("something3");
}
