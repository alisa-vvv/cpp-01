/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Harl.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/16 17:37:46 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/16 19:21:07 by avaliull            ########   odam.nl   */
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

	Harl::harl_member debug_ptr = &Harl::debug;
	Harl::harl_member info_ptr = &Harl::info;
	Harl::harl_member warning_ptr = &Harl::warning;
	Harl::harl_member error_ptr = &Harl::error;

	if (level == "DEBUG")
		(this->*debug_ptr)();
	if (level == "INFO")
		(this->*info_ptr)();
	if (level == "WARNING")
		(this->*warning_ptr)();
	if (level == "ERROR")
		(this->*error_ptr)();
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
