/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:35:13 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/14 18:11:50 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __BRAIN__
#define __BRAIN__

#include <string>

class Brain
{
private:
	std::string brain[100];
public:
	Brain();
	Brain(const Brain& otherBrain);
	Brain&	operator=(const Brain& otherBrain);
	virtual ~Brain();
};

#endif