/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:39:34 by snaggara          #+#    #+#             */
/*   Updated: 2023/10/02 12:04:17 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

PhoneBook::PhoneBook() : _id_contact(0)
{}

bool	PhoneBook::command()
{
	std::string	command;

	std::cout << std::endl << ASK_COMMAND << std::endl;
	getline(std::cin, command);

	if (command == "EXIT")
		return (false);
	else if (command == "ADD")
		this->execute_add();
	else if (command == "SEARCH")
		this->execute_search();
	return (true);
}

void	PhoneBook::execute_search() const
{
	this->display_all_contact();
	
	int	ask_id;
	std::cout << CHOOSE_ID << std::endl;
	ask_id = -1;
	std::cin >> ask_id;
	while (std::cin.fail() || !this->contact_exist(ask_id))
	{
		std::cin.clear(); // Réinitialiser l'état d'erreur du flux d'entrée
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << ID_NO_VALID << std::endl;
		std::cin >> ask_id;
	}
	std::cout << std::endl << std::endl;
	this->found_contact_by_id(ask_id).display_contact();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

void	PhoneBook::execute_add()
{
	Contact	*theContact;

	if (_id_contact >= 8)
	{
		this->delete_first_contact();
		theContact = _contact_list + 7;
	}
	else
		theContact = _contact_list + _id_contact;


	theContact->set_id(_id_contact);
	theContact->set_first_name();
	theContact->set_last_name();
	theContact->set_nickname();
	theContact->set_phone_number();
	theContact->set_darkest_secret();

	_id_contact++;
	std::cout << std::endl << SUCCESS_ADD << std::endl << std::endl;
}


bool 	PhoneBook::delete_first_contact()
{
	for (int i = 0; i < 7; i++)
		_contact_list[i] = _contact_list[i + 1];
	return (true);
}

bool	PhoneBook::contact_exist(int id) const
{
	if (id == -1)
		return (false);
	for (int i = 0; i < 8; i++)
	{
		if (_contact_list[i].get_id() == id)
			return (true);
	}
	return (false);
}

Contact	PhoneBook::found_contact_by_id(int id) const
{
	
	for (int i = 0; i < 8; i++)
	{
		if (_contact_list[i].get_id() == id)
			return (_contact_list[i]);
	}
	Contact	contact;
	contact.set_id(-1);
	return (contact);
}

void	PhoneBook::display_all_contact() const
{
	std::cout << "--------------------------------------------------------" << std::endl;

	for (int i = 0; i < 8 && _contact_list[i].get_id() != -1; i++)
	{
		std::stringstream id_stream;
    	id_stream << _contact_list[i].get_id();
    	std::string id_str = id_stream.str();
		
		std::cout << "|" << truncate_str(id_str);
		std::cout << "|" << truncate_str(_contact_list[i].get_first_name());
		std::cout << "|" << truncate_str(_contact_list[i].get_last_name());
		std::cout << "|" << truncate_str(_contact_list[i].get_nickname());
		std::cout << "|" << truncate_str(_contact_list[i].get_phone_number());
		std::cout << "|" << std::endl;


	}
	std::cout << "--------------------------------------------------------" << std::endl;
}

std::string	truncate_str(std::string str)
{
	if (str.size() == 10)
		return (str.substr(0,10));
	else if (str.size() >= 10)
	{
		str[9] = '.';
		return (str.substr(0,10));
	}
	
	std::string	to_return("          ");
	int	j = 9;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		to_return[j] = str[i];
		j--;
	}
	return (to_return);
}
