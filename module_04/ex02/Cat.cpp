/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:02:27 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 15:07:48 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal("Cat")
{
	brain = new Brain();
	std::cout << "Cat class constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat class destructor" << std::endl;

}

void		Cat::makeSound() const
{
	std::cout << "Miaw miaow" << std::endl;

}

Cat::Cat(const Cat& cat) : AAnimal(cat)
{
	std::cout << "Cat class copy constructor" << std::endl;
	brain = new Brain(*(cat.brain));
}

Cat&	Cat::operator=(const Cat& cat)
{
	type = cat.getType();
	std::cout << "Cat class affectation operator" << std::endl;
	return (*this);
}

Brain&	Cat::getBrain() const
{
	return (*brain);
}