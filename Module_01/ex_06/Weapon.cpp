/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:22 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/27 11:50:21 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "";
}

Weapon::Weapon(std::string const &type)
{
	this->_type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string const &type)
{
	this->_type = type;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}