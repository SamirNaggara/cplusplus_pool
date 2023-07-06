/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:35:17 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/05 01:39:18 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	
}

/*
	Le constructeur prends un int en argument.
	Et il shift tout de 8 vers la gauche
*/
Fixed::Fixed(int const nb){
	std::cout << "Int constructor is call" << std::endl;
	_nb  = nb << _nb_bit;
}

/*
	En gros on commence a stocker a partir de 100000000
	Un 1 et 8 zéro.
	Et on multiplie nb par ce nombre la
	Il va alors stocker le max d'infos dans tout les bits
	La partie entiere est déja dans ce qui est a gauche
	La partie décimal ira se stocker a droite
	L'arondi fais en sorte que tout sois bien stocké dans le nb
*/
Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor is call" << std::endl;

	_nb = roundf(nb * (1 << _nb_bit));

	// _nb = (int)nb << _nb_bit;
	// dec = (nb - (float)(int)nb) * 100;

	// dec_arr = (int)roundf(dec);
	// _nb = _nb | dec_arr;

}



Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed&	Fixed::operator=(const Fixed& fixed)
{
	(void)fixed;
	std::cout << "Copy assignment operator called" << std::endl;
	_nb = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

/*
	On a multiplié 100000000 par le nombre original pour 
	avoir le float
	Si on veut recuperer le float, il faut donc diviser par ce meme nombre
*/
float	Fixed::toFloat(void) const
{
	return ((float)_nb / (float)(1 << 8));
}



/*
	Et pour creer ça c'est facile
	2 ^ 0 + 2 ^1 + 2 ^ 2.. + 2 ^ 7
	Ah non finalement meilleur methode.
	On utilise l'opérateur OU |= pour ajouter un 1
	Puis on bitshift a gauche
*/
int		Fixed::_createFullOneNumber(int nb_one) const
{
	int result = 1;

    for (int i = 1; i < nb_one; i++) {
		result = result << 1;
        result = result | 1;
    }
    return result;
}

int		Fixed::toInt(void) const
{
	return (_nb >> _nb_bit);
}

int		Fixed::getNbBit(void) const
{
	return (_nb_bit);
}


std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed)
{
	//int		full_nb_bit = fixed.createFullOneNumber(fixed.getNbBit());

	// if (full_nb_bit && fixed.getRawBits() == 0)
	// 	std::cout << fixed.toInt();
	// else
	std::cout << fixed.toFloat();
	return (flux);
}