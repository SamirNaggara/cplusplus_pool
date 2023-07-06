/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:35:17 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/04 21:11:18 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Défaut constructor called" << std::endl;

};

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed&	Fixed::operator=(const Fixed& fixed)
{
	(void)fixed;
	std::cout << "Copy assignment opérator called" << std::endl;
	_nb = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fonction called" << std::endl;

	_nb = raw;
}
