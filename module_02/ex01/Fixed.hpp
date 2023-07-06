/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:48:36 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/04 23:09:21 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__
#include <iostream>

class Fixed
{
private:
	int					_nb;
	static int const	_nb_bit = 8;
	int			_createFullOneNumber(int nb_one) const;

public:
	Fixed(void); // Initialise a 0
	Fixed(const Fixed& fixed); // Constructeur de copie
	Fixed(int const nb);
	Fixed(float const nb);
	Fixed&	operator=(const Fixed& fixed); //Surcharge de l'opérateur d'affectation
	
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getNbBit(void) const;
};

std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed); //Surcharge de l'opérateur d'affectation

#endif