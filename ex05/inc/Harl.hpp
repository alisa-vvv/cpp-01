/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Harl.hpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/03/16 17:33:20 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/16 17:38:17 by avaliull            ########   odam.nl   */
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
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
