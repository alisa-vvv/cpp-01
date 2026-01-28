/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   zombieHoard.cpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 17:08:18 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 18:25:16 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHoard(
	int N,
	std::string name
) {
	if (N < 0 || N > MAX_HOARD_SIZE) {
		if (N < 0)
			std::cout << "Can't create a hoard of negative size!\n";
		if (N > MAX_HOARD_SIZE)
			std::cout << "Too many zombies :( max: " << MAX_HOARD_SIZE << '\n';
		return (nullptr);
	}
	Zombie	*zombie_hoard = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie_hoard[i].assignName(name);
	}
	return (zombie_hoard);
}
