/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:22:36 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 17:22:40 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongAAnimal__
#define __WrongAAnimal__

#include <string>

class WrongAAnimal
{
protected:
	std::string		type;
public:
	WrongAAnimal();
	WrongAAnimal(const std::string type);
	WrongAAnimal(const WrongAAnimal& WrongAAnimal);
	WrongAAnimal&	operator=(const WrongAAnimal& WrongAAnimal);
	virtual ~WrongAAnimal();
	std::string	getType() const;
	void		setType(std::string	value);
	virtual void		makeSound() const;
};

#endif