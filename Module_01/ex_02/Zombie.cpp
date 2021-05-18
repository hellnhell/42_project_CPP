/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:19:22 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/18 17:00:10 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_type = "";
	this->_name = "";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
};


Zombie::~Zombie()
{
	std::cout << std::endl;
}

void	Zombie::announce()
{
	
	std::cout << "<" << _name << "(" << _type << ")" << ">"<< " Yyyyyyiiiiieeeeeyyyy";
};
	