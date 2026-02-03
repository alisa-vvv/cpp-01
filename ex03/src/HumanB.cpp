/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   HumanB.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:41:23 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 19:41:24 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(
	std::string name
) {
	HumanB::name = name;
	Weapon = nullptr;
}

HumanB::~HumanB(
) {
}

void	HumanB::attack(
	void
) {
	std::cout << name << " attacks with their ";
	if (Weapon == nullptr)
		std::cout << "bare hands!";
	else
		std::cout << Weapon->getType();
	std::cout << '\n';
}

void	HumanB::setWeapon(
	class Weapon&	weapon
) {
	HumanB::Weapon = &weapon;
}
