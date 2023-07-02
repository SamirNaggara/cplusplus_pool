/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:39:28 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 12:41:54 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
# define CONTACT_CLASS

#include <string>

class Contact
{
public:

	//Contact(int id, std::string first_name, std::string last_name,
	//		std::string nickname, std::string phone_number,
	//		std::string darkest_secret);
	//~Contact(void);

	int			get_id() const;
	bool		set_id(int id);

	std::string get_first_name() const;
	bool		set_first_name();

	std::string get_last_name() const;
	bool		set_last_name();

	std::string get_nickname() const;
	bool		set_nickname();

	std::string get_phone_number() const;
	bool		set_phone_number();

	std::string get_darkest_secret() const;
	bool		set_darkest_secret();

	void		display_contact() const;
	void		display_contact_summary() const;

private:
	int			_id;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};
#endif