/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:45 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:10:29 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const &a2)
{
	this->_name = a2._name;
	this->_apcost = a2._apcost;
	this->_damage = a2._damage;
}

AWeapon::~AWeapon() {}


AWeapon &AWeapon::operator=(AWeapon const &a2)
{
	this->_name = a2._name;
	this->_apcost = a2._apcost;
	this->_damage = a2._damage;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (this->_name);
}

int	AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int	AWeapon::getDamage() const
{
	return (this->_damage);	
}