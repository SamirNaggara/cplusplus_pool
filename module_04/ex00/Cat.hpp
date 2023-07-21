/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:01:53 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 13:53:04 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual	~Cat();
	virtual void makeSound() const;
	Cat(const Cat& cat);
	Cat&	operator=(const Cat& cat);
};


#endif