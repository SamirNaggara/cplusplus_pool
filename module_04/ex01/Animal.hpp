/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:53:49 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 15:00:40 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__

#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string		type;
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal& animal);
	Animal&	operator=(const Animal& animal);
	virtual ~Animal();
	std::string	getType() const;
	void		setType(std::string	value);
	virtual void		makeSound() const;
	virtual Brain&	getBrain() const = 0;
};

#endif