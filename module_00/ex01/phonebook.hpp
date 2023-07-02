/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:35:10 by snaggara          #+#    #+#             */
/*   Updated: 2023/07/02 15:12:33 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

# include "phonebook.class.hpp"
# include <iostream>
# include <limits>
# include <string>
# include <sstream>
# include <typeinfo>


# define ASK_COMMAND "Allez, on rentre une commande !"
# define CHOOSE_ID "Choissisez l'id contact de votre choix"
# define ID_NO_VALID "Id non valide, recommencez"
# define SUCCESS_ADD "Bravo, le contact a bien été validé !"

/*
		Renvoie seulement les 10 premiers caracteres,
		sur la droite
	*/
std::string	truncate_str(std::string str);
#endif
