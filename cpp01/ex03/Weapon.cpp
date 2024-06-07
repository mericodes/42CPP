/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:25:48 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 19:50:23 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}


const std::string	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(const std::string newType)
{
	_type = newType;
}

Weapon::~Weapon()
{
	
}