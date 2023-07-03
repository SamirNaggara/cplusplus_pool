/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:25:05 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 12:41:00 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type){};

Weapon::~Weapon()
{
	// std::cout << "L'arme de type " << _type << " a été détruite" << std::endl;
}

std::string&	Weapon::getType()
{
	std::string	&type_ref = _type;
	return (type_ref);
}

void		Weapon::setType(std::string type)
{
	_type = type;
}
