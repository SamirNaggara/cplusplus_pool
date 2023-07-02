/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:29:12 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 23:49:55 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name){};

Zombie::~Zombie()
{
	std::cout << _name << " is destroy" << std::endl;
}
void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiinnnzzzZ" << std::endl;
}