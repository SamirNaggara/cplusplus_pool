/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:01:53 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 14:44:57 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	virtual	~Cat();
	virtual void makeSound() const;
	Cat(const Cat& cat);
	virtual Cat&	operator=(const Cat& cat);
	virtual Brain&	getBrain() const;

};


#endif