/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:46:40 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/29 19:17:48 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int	N = 3;

	zombie = zombieHorde(N, "Bernarda");
	for (int i = 0; i < N; i++)
	{
		zombie[i].announce();
	}
	delete[] (zombie);
	return (0);
}