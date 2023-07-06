/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:48:36 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 12:17:40 by snaggara         ###   ########.fr       */
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
	
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getNbBit(void) const;

	Fixed&	operator=(const Fixed& fixed); //Surcharge de l'opérateur d'affectation
	bool	operator>(const Fixed& fixed) const; 
	bool	operator<(const Fixed& fixed) const; 
	bool	operator>=(const Fixed& fixed) const; 
	bool	operator<=(const Fixed& fixed) const; 
	bool	operator==(const Fixed& fixed) const; 
	bool	operator!=(const Fixed& fixed) const;

	Fixed	operator+(const Fixed& fixed) const;
	Fixed	operator-(const Fixed& fixed) const;
	Fixed	operator*(const Fixed& fixed) const;
	Fixed	operator/(const Fixed& fixed) const;

	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);

	static Fixed min(const Fixed& fixed1, const Fixed& fixed2);
	static Fixed min(Fixed& fixed1, Fixed& fixed2);
	static Fixed max(const Fixed& fixed1, const Fixed& fixed2);
	static Fixed max(Fixed& fixed1, Fixed& fixed2);
	

};

std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed); //Surcharge de l'opérateur d'affectation

#endif