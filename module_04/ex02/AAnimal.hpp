/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

class AAnimal
{
protected:
	std::string		type;
public:
	AAnimal();
	AAnimal(const std::string type);
	AAnimal(const AAnimal& animal);
	AAnimal&	operator=(const AAnimal& animal);
	virtual ~AAnimal();
	std::string	getType() const;
	void		setType(std::string	value);
	virtual void		makeSound() const;
	virtual Brain&	getBrain() const = 0;
};

#endif