/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 19:42:37 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 20:36:36 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

using std::cout;

int	main(
	void
) {
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	return (0);
}
