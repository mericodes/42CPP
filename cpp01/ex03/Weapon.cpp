/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:25:48 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/16 19:53:33 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}


std::string	Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

Weapon::~Weapon()
{
	
}