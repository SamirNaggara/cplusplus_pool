/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:14:48 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/06 17:55:09 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap(std::string name) :
	_name(name)
{
	std::cout << "Diamond Constructor dalled" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energie_points = ScavTrap::_energie_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor called" << std::endl;

}


void	DiamondTrap::whoAmI() const
{
	std::cout << "I am a DiamondTrap:\n	hit_points:" << _hit_points << "\n	Enegie points : " << _energie_points << "\n	Attack damage : " << _attack_damage << std::endl;
}
