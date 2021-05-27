/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:46:01 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/27 11:53:03 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : _name(name) {};

HumanB::~HumanB() {};

void	HumanB::attack()
{
	std::cout << this->_name << " has a " << this->_weapon->getType() << " weapon" << std::endl;
};

void HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = &weapon;
};