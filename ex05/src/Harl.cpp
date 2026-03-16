/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Harl.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/16 17:37:46 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/16 18:11:09 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(
	void
) {
}

Harl::~Harl(
	void
) {
}

void	Harl::complain(
	std::string	level
) {
	std::cout << "level: " << level << '\n';

	if (level == "DEBUG")
		Harl::debug();
	if (level == "INFO")
		Harl::info();
	if (level == "WARNING")
		Harl::warning();
	if (level == "ERROR")
		Harl::error();
}

void	Harl::debug(
	void
) {
	std::cout << "this exercise is really dumb\n";
}

void	Harl::info(
	void
) {
	std::cout << "it doesn't explain or demosntrate anything about member function pointers\n";
}

void	Harl::warning(
	void
) {
	std::cout << "changing Karen to Harl doesn't make the examples less tasteless\n";
}

void	Harl::error(
	void
) {
	std::cout << "what the fuck is going on\n";
}
