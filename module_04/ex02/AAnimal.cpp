/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:57:52 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 15:00:35 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("Unknown AAnimal")
{
	std::cout << "AAnimal class constructor" << std::endl;
}

AAnimal::AAnimal(const std::string type) : type(type)
{
	std::cout << "AAnimal class constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal) : type(animal.type)
{
	std::cout << "AAnimal class copy constructor" << std::endl;

}

AAnimal&	AAnimal::operator=(const AAnimal& animal)
{
	type = animal.getType();
	std::cout << "AAnimal class affectation operator" << std::endl;
	return (*this);
}



AAnimal::~AAnimal()
{
	std::cout << "AAnimal class destructor" << std::endl;

}

std::string	AAnimal::getType() const
{
	return (type);
}

void		AAnimal::setType(std::string	value)
{
	type = value;
}


void		AAnimal::makeSound() const
{
	std::cout << "Son d'un animal..." << std::endl;
}

