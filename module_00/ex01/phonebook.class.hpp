/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:39:38 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 15:34:33 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS
# define PHONEBOOK_CLASS

#include "contact.class.hpp"
# include <vector>


class PhoneBook
{
public:
	/*
		Renvoie false si on sors des commands possibles
	*/
	bool	command();

private:
	/*
		Ajoute un contact
	*/
	void	execute_add();

	/*
		Supprime le premier contact,
		Décale tout les autres
		Et met le nombre de contact a 7
	*/
	bool	delete_first_contact();

	void	execute_search() const;

	/*
		Renvoie true si le contact existe
	*/
	bool	contact_exist(int id) const;
	
	/*
		Renvoie le contact en fonction de l'id
	*/
	Contact	found_contact_by_id(int id) const;

	/*
		Affiche tout les contacts dans un tableau
	*/
	void	display_all_contact() const;

	


	std::vector<Contact> 	list_contact;
};


#endif