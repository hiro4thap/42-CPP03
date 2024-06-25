/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:12 by dev               #+#    #+#             */
/*   Updated: 2024/06/25 15:49:20 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	print_clap(ScavTrap& trap)
{
	std::cout << "name in dia   : " << trap.getName() << "\n";
	std::cout << "hit point     : " << trap.getHitPoint() << "\n";
	std::cout << "energy point  : " << trap.getEnergyPoint() << "\n";
	std::cout << "attack damage : " << trap.getAttackDamage() << "\n";
}

int	main(void)
{
	std::cout << "--- Construct ---" << "\n";
	ScavTrap	Aden("Aden");
	print_clap(Aden);
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
