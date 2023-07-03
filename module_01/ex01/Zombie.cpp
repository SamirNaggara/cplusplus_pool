/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:29:12 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:02:21 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){}

Zombie::Zombie(std::string name) : _name(name){};

Zombie::~Zombie()
{
	std::cout << _name << " is destroy" << std::endl;
}
void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiinnnzzzZ" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}
