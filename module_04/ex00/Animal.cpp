/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:57:52 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:26:49 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Unknown Animal")
{
	std::cout << "Animal class constructor" << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << "Animal class constructor" << std::endl;
}

Animal::Animal(const Animal& animal) : type(animal.type)
{
	std::cout << "Animal class copy constructor" << std::endl;

}

Animal&	Animal::operator=(const Animal& animal)
{
	type = animal.getType();
	std::cout << "Animal class affectation operator" << std::endl;
	return (*this);
}



Animal::~Animal()
{
	std::cout << "Animal class destructor" << std::endl;

}

std::string	Animal::getType() const
{
	return (type);
}

void		Animal::setType(std::string	value)
{
	type = value;
}


void		Animal::makeSound() const
{
	std::cout << "Son d'un animal..." << std::endl;
}

