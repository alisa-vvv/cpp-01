/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Zombie.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:44:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 16:16:46 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie();

	void	announce (
		void
	);

private:
	std::string _name;
};

Zombie	*newZombie(
	std::string name
);
void	randomChamp(
	std::string name
);
