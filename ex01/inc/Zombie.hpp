/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Zombie.hpp                                              :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 15:44:54 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 18:30:16 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# pragma once

#include <string>
# ifndef MAX_HOARD_SIZE
#  define MAX_HOARD_SIZE 8192
# endif /*MAX_HOARD_SIZE*/

class Zombie {
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	announce (
		void
	);
	void	assignName(
		std::string name
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

Zombie *zombieHoard(
	int N,
	std::string name
);
#endif /*# define ZOBMIE_HPP*/
