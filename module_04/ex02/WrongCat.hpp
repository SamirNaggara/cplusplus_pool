/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:01:53 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 17:23:05 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongCat__
#define __WrongCat__

#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
{
public:
	WrongCat();
	virtual	~WrongCat();
	virtual void makeSound() const;
	WrongCat(const WrongCat& wrongCat);
	WrongCat&	operator=(const WrongCat& wrongCat);
};


#endif