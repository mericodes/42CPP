/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:00 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 19:35:36 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) 
{
	Point A(0, 0);
	Point B(4, 0);
	Point C(0, 4);
	Point P(1, 1);

	if (bsp(A, B, C, P))
		std::cout << "Point P is inside triangle ABC." << std::endl;
	else
		std::cout << "Point P is outside triangle ABC." << std::endl;
	return (0);
}
