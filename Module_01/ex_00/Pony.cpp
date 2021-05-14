/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:04:56 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 14:25:16 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::run(std::string color, Pony *pony)
{
		
	if (pony->_color == "Blue")
	{
		color = "Red";
		std::cout << pony->_color << " pony is turnining " << color;
	}
	if (pony->_color == "Green")
	{
		color = "Yellow";
		std::cout << pony->_color << " pony is turnining " << color;
	}
}

Pony::Pony(std::string color)
{
	_color = color;
}

Pony::~Pony(void)
{
	std::cout << std::endl;
}
