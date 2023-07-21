/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:53:49 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:26:12 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__

#include <string>

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
};

#endif