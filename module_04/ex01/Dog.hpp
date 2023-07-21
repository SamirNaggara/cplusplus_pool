/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:05:59 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 14:45:02 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	virtual	~Dog();
	virtual void makeSound() const;
	Dog(const Dog& dog);
	virtual Dog&	operator=(const Dog& dog);
	virtual Brain&	getBrain() const;
};


#endif
