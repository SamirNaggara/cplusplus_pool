/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:05:59 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:29:49 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual	~Dog();
	virtual void makeSound() const;
	Dog(const Dog& dog);
	Dog&	operator=(const Dog& dog);
};


#endif
