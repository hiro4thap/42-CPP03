/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:12 by dev               #+#    #+#             */
/*   Updated: 2024/06/25 15:52:55 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	print_clap(DiamondTrap& trap)
{
	std::cout << "name in dia   : " << trap.getName() << "\n";
	std::cout << "name in clap  : " << trap.ClapTrap::getName() << "\n";
	std::cout << "hit point     : " << trap.getHitPoint() << "\n";
	std::cout << "energy point  : " << trap.getEnergyPoint() << "\n";
	std::cout << "attack damage : " << trap.getAttackDamage() << "\n";
}

int	main(void)
{
	std::cout << "--- Construct ---" << "\n";
	DiamondTrap	Aden("Aden");
	print_clap(Aden);
	Aden.whoAmI();
	Aden.guardGate();
	Aden.highFiveGuys();
	std::cout << "--- HP and EP are more than 0 ---" << "\n";
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
}
