/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   newZombie.cpp                                           :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:59:08 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 16:03:18 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(
	std::string name
)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}
