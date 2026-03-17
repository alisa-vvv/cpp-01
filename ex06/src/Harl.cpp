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
#include <iostream>

Harl::Harl(
	void
) {
}

Harl::~Harl(
	void
) {
}

void	Harl::filter_complaint(
	std::string log_level_str
) {
	Harl::harl_member	harlptr_arr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string			levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					log_level;
	
	for (log_level = 0; log_level < 4; log_level++) {
		if (levels[log_level] == log_level_str)
			break ;
	}

	switch (log_level) {
		case 0:
			(this->*harlptr_arr[0])();
		case 1:
			(this->*harlptr_arr[1])();
		case 2:
			(this->*harlptr_arr[2])();
		case 3:
			(this->*harlptr_arr[3])();
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
