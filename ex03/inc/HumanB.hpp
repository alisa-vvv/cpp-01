/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   HumanB.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:44:40 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 19:44:41 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(
		std::string name
	);
	~HumanB();

	void	attack(void);

	void	setWeapon(
		class Weapon &weapon
	);

private:
	std::string	name;
	Weapon*		Weapon;
};
