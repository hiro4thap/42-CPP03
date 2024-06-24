/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:12 by dev               #+#    #+#             */
/*   Updated: 2024/06/24 17:29:01 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "--- Construct ---" << "\n";
	ScavTrap	Aden("Aden");
	std::cout << "--- HP and EP are more than 0 ---" << "\n";
	Aden.guardGate();
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
