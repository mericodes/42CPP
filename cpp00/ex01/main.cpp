/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:08:14 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 17:43:56 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook phoneBook;
	Contact contact;

	
	// std::cout << "Write ADD, SEARCH or EXIT." << std::endl;
	while (true)
	{
		std::cout << "Write ADD, SEARCH or EXIT." << std::endl;
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF." << std::endl;
			exit(0);
		}
		if (input == "EXIT")
			exit(0);
		else if (input == "ADD")
			phoneBook.AddContact(&contact);
		else if (input == "SEARCH")
		{
			phoneBook.DisplayContacts(&phoneBook);
			phoneBook.SearchContact(&phoneBook);
		}
		// else
		// 	std::cout << "Write ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}