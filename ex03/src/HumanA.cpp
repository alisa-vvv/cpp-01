/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   HumanA.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:41:10 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 20:50:58 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(
	std::string name,
	class Weapon& weapon
) {
	HumanA::name = name;
	HumanA::Weapon = &weapon;
}

HumanA::~HumanA(
) {
}

void	HumanA::attack(
	void
) {
	std::cout << name << " attacks with their " << Weapon->getType() << '\n';
}
