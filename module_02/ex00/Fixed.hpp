/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:48:36 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/04 21:14:29 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

class Fixed
{
private:
	int					_nb;
	static int const	nb_bit = 8;
public:
	Fixed(void); // Initialise a 0
	Fixed(const Fixed& fixed); // Constructeur de copie
	Fixed&	operator=(const Fixed& fixed); //Surcharge de l'opérateur d'affectation
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif