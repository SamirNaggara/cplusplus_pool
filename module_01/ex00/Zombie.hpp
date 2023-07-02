/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:32:21 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 23:48:39 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	__ZOMBIE_H__
# define	__ZOMBIE_H__

#include <string>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;
private:
	std::string _name;
};

#endif
