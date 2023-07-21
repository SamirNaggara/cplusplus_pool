/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:44:02 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 14:56:16 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& otherBrain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		brain[i] = otherBrain.brain[i];

}

Brain&	Brain::operator=(const Brain& otherBrain)
{
	int	i = 0;

	std::cout << "Brain affectation called" << std::endl;
	while (i < 100)
		brain[i] = otherBrain.brain[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain desctructor called" << std::endl;
}
