/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:01:53 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/15 15:07:48 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
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