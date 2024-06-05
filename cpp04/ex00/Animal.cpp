/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:57 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 20:19:40 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Animal::Animal()
{}
Animal::Animal(std::string name)
{}

/*	COPY CONSTRUCTOR	*/
Animal::Animal(const Animal &copy)
{}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Animal& Animal::operator=(const Animal &other)
{

}
		
/*	GETTERS AND SETTERS	*/
std::string Animal::getType()
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/

/*	DESTRUCTOR	*/
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}