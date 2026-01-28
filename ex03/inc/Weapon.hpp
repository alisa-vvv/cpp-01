/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Weapon.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:44:52 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 20:51:22 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
public:
	Weapon(std::string weapon_type);
	~Weapon();

	const std::string&	getType(
		void
	);

	void	setType(
		std::string	weapon_type
	);
private:
	std::string	type;
};
