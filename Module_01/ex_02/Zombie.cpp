/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:19:22 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/19 13:57:16 by emartin-         ###   ########.fr       */
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
	this->scream();	
};

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> 😿 (" << this->_name  << " is gone) " << std::endl;
}

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::scream(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> 🧟 YYYYIEEEEEE ... 🧟" << std::endl; 
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Hi i'm " << this->_name << " 👋" << std::endl;
};
	