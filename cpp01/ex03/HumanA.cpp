/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:26:11 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/16 19:50:16 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wepon)
{
	_name = name;
	_weapon = &wepon;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
	
}