/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:32:21 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 11:01:22 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	__ZOMBIE_H__
# define	__ZOMBIE_H__

#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;
	void	set_name(std::string name);
private:
	std::string _name;
};

#endif
