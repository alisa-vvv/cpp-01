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
#include <iostream>

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
	static const std::string	clr_non = "\033[0m";
	static const std::string	clr_yel = "\033[93m";
	Zombie *zombie_hoard;


	std::cout << clr_yel << "\nMaking zombie hoard of size 10:" << clr_non << '\n';
	zombie_hoard = test_hoard(10);
	delete[] zombie_hoard;
	std::cout << '\n';

	std::cout << clr_yel << "\nMaking zombie hoard of size 0:" << clr_non << '\n';
	zombie_hoard = test_hoard(0);
	delete[] zombie_hoard;
	std::cout << '\n';

	std::cout << clr_yel << "\nMaking zombie hoard of size -10:" << clr_non << '\n';
	zombie_hoard = test_hoard(-10);
	delete[] zombie_hoard;
	std::cout << '\n';

	std::cout << clr_yel << "\nMaking zombie hoard of size MAX_HOARD_SIZE + 1:" << clr_non << '\n';
	zombie_hoard = test_hoard(MAX_HOARD_SIZE + 1);
	delete[] zombie_hoard;
	std::cout << '\n';

	std::cout << clr_yel << "\nMaking zombie hoard of size INT_MIN:" << clr_non << '\n';
	zombie_hoard = test_hoard(INT_MIN);
	delete[] zombie_hoard;
	std::cout << '\n';

	std::cout << clr_yel << "\nMaking zombie hoard of size INT_MAX:" << clr_non << '\n';
	zombie_hoard = test_hoard(INT_MAX);
	delete[] zombie_hoard;
	std::cout << '\n';
	
	// Hid this test because it floods the screen :)
//	std::cout << clr_yel << "\nMaking zombie hoard of size MAX_HOARD_SIZE:" << clr_non << '\n';
//	zombie_hoard = test_hoard(MAX_HOARD_SIZE);
//	delete[] zombie_hoard;
//	std::cout << '\n';
}
