/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:29:38 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 12:55:22 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(0), _mhp(0), _ep(0), _mep(0),
	_level(0), _name("name"), _melee(0), _ranged(0), _armor(0)
{
		std::cout << "CL4V-TP  created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct2) : _hp(ct2._hp), _mhp(ct2._mhp), _ep(ct2._ep),
	_mep(ct2._mep), _level(ct2._level), _name(ct2._name), _melee(ct2._melee), _ranged(ct2._ranged), _armor(ct2._armor)
{
	std::cout << "CL4V-TP created and copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4V-TP destoyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ct2)
{
	std::cout << " Assignation opereator called " << std::endl;
	this->_hp = ct2._hp;
	this->_mhp = ct2._mhp;
	this->_ep = ct2._ep;
	this->_mep = ct2._mep;
	this->_melee = ct2._melee;
	this->_ranged = ct2._ranged;
	this->_armor = ct2._armor;
	return (*this);
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}
