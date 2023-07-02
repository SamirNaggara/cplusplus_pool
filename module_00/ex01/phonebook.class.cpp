/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:39:34 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 00:07:49 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"


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
	
	if (this->list_contact.size() >= 8)
		this->delete_first_contact();
	
	int	last_id = 0;
	if (this->list_contact.size())
		last_id = this->list_contact.back().get_id();
		
	Contact	contact;
	contact.set_id(last_id+ 1);
	contact.set_first_name();
	contact.set_last_name();
	contact.set_nickname();
	contact.set_phone_number();
	contact.set_darkest_secret();

	this->list_contact.push_back(contact);

	//this->add_contact_to_list(contact);
	
	std::cout << std::endl << SUCCESS_ADD << std::endl << std::endl;
}

// int		PhoneBook::get_nb_contact() const
// {
// 	int	i;

// 	i = 0;
// 	while (i < 8 && this->list_contact[i])
// 		i++;
// 	return (i);
// }

bool 	PhoneBook::delete_first_contact()
{
	if (this->list_contact.size() >= 8)
		this->list_contact.erase(this->list_contact.begin());
	return (true);
}

bool	PhoneBook::contact_exist(int id) const
{
	for (int i = 0; i < (int)this->list_contact.size(); i++)
	{
		if (this->list_contact[i].get_id() == id)
			return (true);
	}
	return (false);
}

Contact	PhoneBook::found_contact_by_id(int id) const
{
	
	for (int i = 0; i < (int)this->list_contact.size(); i++)
	{
		if (this->list_contact[i].get_id() == id)
			return (this->list_contact[i]);
	}
	Contact	contact;
	contact.set_id(-1);
	return (contact);
}

void	PhoneBook::display_all_contact() const
{
	std::cout << "--------------------------------------------------------" << std::endl;

	for (int i = 0; i < (int)this->list_contact.size(); i++)
	{
		//std::cout << typeid(this->list_contact[i].get_id());

		std::stringstream id_stream;
    	id_stream << this->list_contact[i].get_id();
    	std::string id_str = id_stream.str();
		
		std::cout << "|" << truncate_str(id_str);
		std::cout << "|" << truncate_str(this->list_contact[i].get_first_name());
		std::cout << "|" << truncate_str(this->list_contact[i].get_last_name());
		std::cout << "|" << truncate_str(this->list_contact[i].get_nickname());
		std::cout << "|" << truncate_str(this->list_contact[i].get_phone_number());
		std::cout << "|" << std::endl;


	}
	std::cout << "--------------------------------------------------------" << std::endl;
}

std::string	truncate_str(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0,10));
	
	std::string	to_return("          ");
	int	j = 9;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		to_return[j] = str[i];
		j--;
	}
	return (to_return);
}
