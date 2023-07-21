/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:07:59 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:33:18 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class constructor" << std::endl;

}

Dog::~Dog()
{
	std::cout << "Dog class destructor" << std::endl;

}

void		Dog::makeSound() const
{
	std::cout << "Waof waof" << std::endl;

}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog class copy constructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	type = dog.getType();
	std::cout << "Dog class affectation operator" << std::endl;
	return (*this);
}
