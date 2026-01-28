/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   randomChamp.cpp                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:59:23 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 16:10:55 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void	randomChamp(
	std::string name
) {
	Zombie random_champ(name);
	random_champ.announce();
}
