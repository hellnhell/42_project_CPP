/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:43 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 13:59:41 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << this->_name << "has a " << this->_weapon.getType() << " weapon" << std::endl;
}