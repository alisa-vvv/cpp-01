/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:48:00 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 16:16:43 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(
	void
) {
	Zombie static_main_zombie("static zombie from main");
	Zombie *dynamic_zombie;

	dynamic_zombie = newZombie("dynamically allocated zombie");
	randomChamp("rando");
	static_main_zombie.announce();
	delete dynamic_zombie;
}
