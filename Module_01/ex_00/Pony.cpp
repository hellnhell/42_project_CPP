/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:04:56 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/26 11:56:03 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::changeColor()
{
	if (this->_color == "Blue")
		std::cout << this->_color << " pony is turnining Red";
	if (this->_color == "Green")
		std::cout << this->_color << " pony is turnining Yellow";
}

Pony::Pony(std::string color)
{
	_color = color;
}

Pony::~Pony(void)
{
	std::cout << std::endl;
}
