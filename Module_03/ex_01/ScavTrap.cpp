/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:59 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 10:37:12 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : _hp(100), _mhp(100), _ep(50), _mep(50),
	_level(1), _name(name), _melee(20), _ranged(15), _armor(3)
{
		std::cout << "SC4V-TP <" << this->_name << "> \"Hi Dude im protecting the door!!\"." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st2) : _hp(st2._hp), _mhp(st2._mhp), _ep(st2._ep),
	_mep(st2._mep), _level(st2._level), _name(st2._name), _melee(st2._melee), _ranged(st2._ranged), _armor(st2._armor)
{
	std::cout << "SC4V-TP <" << this->_name << "> \"Hi Dude im in copy protecting the door!!\"." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << this->_name << "> \"Eio the door is open!!\"." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &st2)
{
	std::cout << " Assignation opereator called " << std::endl;
	this->_hp = st2._hp;
	this->_mhp = st2._mhp;
	this->_ep = st2._ep;
	this->_mep = st2._mep;
	this->_melee = st2._melee;
	this->_ranged = st2._ranged;
	this->_armor = st2._armor;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << this->_name << "> attacks -" << target << "- at range, causing " << this->_hp << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP <" << this->_name << "> attacks -" << target << "- at melee, causing " << this->_hp << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hp = this->_hp - amount + this->_armor;
	if (this->_hp <= 0)
		this->_hp = 0;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "SC4V-TP <" << this->_name << "> " << amount << " points of Damage. (Hit point = " << this->_hp << " !)" << std::endl;	
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "SC4V-TP <" << this->_name << "> " << amount << " of Recovery. (Hit point = " << this->_hp << " !)" << std::endl;	

}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge[] = {"Eiiiins!", "Hey sweety!", "Come we r going to take a walk", "Come on baby!", "I like souls like yours, come!"};
	std::cout << "SC4G-TP <" << this->_name << "> says \"" << challenge[rand() % 5] << "\" to -" << target << "-." << std::endl; 

}