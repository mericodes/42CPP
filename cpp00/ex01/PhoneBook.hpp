/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:25 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 18:49:17 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook();
		void	AddContact(Contact *contact);
		void	DisplayContacts(PhoneBook *phoneBook);
		void	SearchContact(PhoneBook *phoneBook);
		~PhoneBook();
};

#endif