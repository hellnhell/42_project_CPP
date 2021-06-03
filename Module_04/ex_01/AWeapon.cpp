/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:45 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/03 13:56:24 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::stirng const &name, int apcost, int damage):
	_name(name), _apcost(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const &a2):
	_name(a2.name), _apcost(a2.apcost), _damage(a2.damage)
{}

AWeapon::~AWeapon() {}


AWeapon &AWeapon::operator=(AWeapon const &a2)
{
	this->_name = a2._name;
	this->_apcost = a2._apcost;
	this->_damage = a2._damage;
	return (*this);
}

std::string const &AWeapon::getName()
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