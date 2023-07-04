/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:05:01 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/04 11:13:46 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARl__
# define __HARL__

# define DEBUG "[DEBUG]\nJe suis le message de debug"
# define INFO "[INFO]\nJe suis le message d'info"
# define WARNING "[WARNING]\nJe suis le message de warning"
# define ERROR "[ERROR]Je suis le message d'erreur"

# include <string>

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void		(Harl::*_complain[4])(void);
	std::string	_listLevel[4];

public:

	Harl();
	void		complain(std::string level);
};


#endif