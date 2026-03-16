/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Harl.hpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/16 17:33:20 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/16 19:15:33 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Harl {
public:
	Harl();
	~Harl();

	void	complain(
		std::string	level
	);
private:
	typedef void	(Harl::*harl_member)(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
