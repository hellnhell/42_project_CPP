/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:59 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 11:00:23 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) :  ClapTrap()
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 50;
	this->_mep = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor = 3;
	
	std::cout << "SC4V-TP <" << this->_name << "> \"Hi Dude im protecting the door!!\"." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st2) : ClapTrap(st2)
{
	std::cout << "SC4V-TP <" << this->_name << "> \"Hi Dude im in copy protecting the door!!\"." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << this->_name << "> \"Eio the door is open!!\"." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &st2)
{
	ClapTrap::operator=(st2);
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
	std::cout << "SC4G-TP <" << this->_name << "> says: \"" << challenge[rand() % 5] << "\" to -" << target << "-." << std::endl; 

}