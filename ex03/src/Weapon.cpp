/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Weapon.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:45:38 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 20:50:12 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

using std::string;

Weapon::Weapon(
	std::string weapon_type
) {
	setType(weapon_type);
}
Weapon::~Weapon() {
}

const std::string&	Weapon::getType(
	void
) {
	return (Weapon::type);
}

void	Weapon::setType(
	std::string	weapon_type
) {
	Weapon::type = weapon_type;
}
