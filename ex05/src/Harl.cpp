/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Harl.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/16 17:37:46 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/16 19:34:09 by avaliull            ########   odam.nl   */
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
	Harl::harl_member	harlptr_arr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string			levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*harlptr_arr[i])();
	}
}

void	Harl::debug(
	void
) {
	std::cout << "DEBUG: this is a debug message\n";
}

void	Harl::info(
	void
) {
	std::cout << "INFO: this is useful info\n";
}

void	Harl::warning(
	void
) {
	std::cout << "WARNING: this is a warning\n";
}

void	Harl::error(
	void
) {
	std::cout << "ERROR: this is an error\n";
}
