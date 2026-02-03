/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   HumanA.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:44:14 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 20:50:54 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(
		std::string name,
		class Weapon& weapon
	);
	~HumanA();

	void	attack(void);

private:
	std::string	name;
	Weapon*		Weapon;
};
