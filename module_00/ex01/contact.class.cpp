/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:39:24 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/03 00:06:52 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include <iostream>
#include <vector>

void	Contact::display_contact() const
{
	std::cout << "Id : " 			<< this->_id << std::endl;
	std::cout << "First Name : " 	<< this->_first_name << std::endl;
	std::cout << "Last Name : " 		<< this->_last_name << std::endl;
	std::cout << "Nickname : " 		<< this->_nickname << std::endl;
	std::cout << "Phone number : " 	<< this->_phone_number << std::endl;
	std::cout << "Darkest secret : "	<< this->_darkest_secret << std::endl;
	return ;
}

void	Contact::display_contact_summary() const
{
	std::cout << "Id : " 			<< this->_id << std::endl;
	std::cout << "First Name : " 	<< this->_first_name << std::endl;
	std::cout << "Last Name : " 		<< this->_last_name << std::endl;
	std::cout << "Nickname : " 		<< this->_nickname << std::endl;
	std::cout << "Phone number : " 	<< this->_phone_number << std::endl;
	return ;
}

int			Contact::get_id() const
{
	return (_id);
}

bool		Contact::set_id(int id)
{
	this->_id = id;
	return (1);
}

std::string Contact::get_first_name() const
{
	return (_first_name);
}

bool 	Contact::set_first_name()
{
	std::string	first_name;

	std::cout << "Le prénom please : " << std::endl;
	getline(std::cin, first_name);
	while (first_name.empty())
	{
		std::cout << "Le prenom ne peut pas être vide" << std::endl;
		std::getline(std::cin, first_name);
	}
	this->_first_name = first_name;
	return (true);
}

std::string Contact::get_last_name() const
{
	return (_last_name);
}

bool 	Contact::set_last_name()
{
	std::string	last_name;

	std::cout << "Le nom please : " << std::endl;

	getline(std::cin, last_name);
	while (last_name.empty())
	{
		std::cout << "Le nom ne peut pas être vide" << std::endl;
		getline(std::cin, last_name);
	}
	this->_last_name = last_name;
	return (true);
}

std::string Contact::get_nickname() const
{
	return (_nickname);
}

bool 	Contact::set_nickname()
{
	std::string	nickname;

	std::cout << "Le surnom please : " << std::endl;

	getline(std::cin, nickname);
	while (nickname.empty())
	{
		std::cout << "Le surnom ne peut pas être vide" << std::endl;
		getline(std::cin, nickname);
	}
	this->_nickname = nickname;
	return (true);
}

std::string Contact::get_phone_number() const
{
	return (_phone_number);
}

bool 	Contact::set_phone_number()
{
	std::string	phone_number;

	std::cout << "Le numéro de téléphone please : " << std::endl;

	getline(std::cin, phone_number);
	while (phone_number.empty())
	{
		std::cout << "Le numero de téléphone ne peut pas être vide" << std::endl;
		getline(std::cin, phone_number);
	}
	this->_phone_number = phone_number;
	return (true);
}

std::string Contact::get_darkest_secret() const
{
	return (_darkest_secret);
}

bool 	Contact::set_darkest_secret()
{
	std::string	darkest_secret;

	std::cout << "Le pkus noir secret please : " << std::endl;

	getline(std::cin, darkest_secret);
	while (darkest_secret.empty())
	{
		std::cout << "Le darkest secret ne peut pas être vide" << std::endl;
		getline(std::cin, darkest_secret);
	}
	this->_darkest_secret = darkest_secret;
	return (true);
}

