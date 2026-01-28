/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Zombie.cpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:46:56 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 18:09:57 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using std::cout;

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
	assignName(name);
}

Zombie::~Zombie() {
	cout << "Zombie " << _name << " is DESTROYED!\n";
}

void	Zombie::announce (
	void
) {
	cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::assignName(std::string name) {
	_name = name;
}
