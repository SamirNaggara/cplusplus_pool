/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:22:36 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 17:22:40 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongAnimal__
#define __WrongAnimal__

#include <string>

class WrongAnimal
{
protected:
	std::string		type;
public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal& WrongAnimal);
	WrongAnimal&	operator=(const WrongAnimal& WrongAnimal);
	virtual ~WrongAnimal();
	std::string	getType() const;
	void		setType(std::string	value);
	virtual void		makeSound() const;
};

#endif