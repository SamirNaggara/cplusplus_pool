/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:21:55 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 17:21:55 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal")
{
	std::cout << "WrongAnimal class constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
	std::cout << "WrongAnimal class constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal) : type(WrongAnimal.type)
{
	std::cout << "WrongAnimal class copy constructor" << std::endl;

}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
	type = WrongAnimal.getType();
	std::cout << "WrongAnimal class affectation operator" << std::endl;
	return (*this);
}



WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destructor" << std::endl;

}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void		WrongAnimal::setType(std::string	value)
{
	type = value;
}


void		WrongAnimal::makeSound() const
{
	std::cout << "Son d'un WrongAnimal..." << std::endl;
}

