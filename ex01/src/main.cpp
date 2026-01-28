/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:48:00 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 18:52:08 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <limits.h>

Zombie	*test_hoard(
	int	zombie_count
) {
	Zombie *zombie_hoard;

	zombie_hoard = zombieHoard(zombie_count, "Fred");
	if (zombie_hoard != nullptr)
	{
		for (int i = 0; i < zombie_count; i++) {
			zombie_hoard[i].announce();
		}
	}
	return (zombie_hoard);
}

int	main(
	void
) {
	Zombie *zombie_hoard;

	zombie_hoard = test_hoard(10);
	delete[] zombie_hoard;
	zombie_hoard = test_hoard(0);
	delete[] zombie_hoard;
	zombie_hoard = test_hoard(-10);
	delete[] zombie_hoard;
	zombie_hoard = test_hoard(INT_MIN);
	delete[] zombie_hoard;
	zombie_hoard = test_hoard(INT_MAX);
	delete[] zombie_hoard;
	
	// Hid this test because it floods the screen :)
//	zombie_hoard = test_hoard(MAX_HOARD_SIZE);
//	delete[] zombie_hoard;
}
