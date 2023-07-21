/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:21:55 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 17:21:55 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAAnimal.hpp"
#include <iostream>

WrongAAnimal::WrongAAnimal() : type("Unknown WrongAAnimal")
{
	std::cout << "WrongAAnimal class constructor" << std::endl;
}

WrongAAnimal::WrongAAnimal(const std::string type) : type(type)
{
	std::cout << "WrongAAnimal class constructor" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal& WrongAAnimal) : type(WrongAAnimal.type)
{
	std::cout << "WrongAAnimal class copy constructor" << std::endl;

}

WrongAAnimal&	WrongAAnimal::operator=(const WrongAAnimal& WrongAAnimal)
{
	type = WrongAAnimal.getType();
	std::cout << "WrongAAnimal class affectation operator" << std::endl;
	return (*this);
}



WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal class destructor" << std::endl;

}

std::string	WrongAAnimal::getType() const
{
	return (type);
}

void		WrongAAnimal::setType(std::string	value)
{
	type = value;
}


void		WrongAAnimal::makeSound() const
{
	std::cout << "Son d'un WrongAAnimal..." << std::endl;
}

