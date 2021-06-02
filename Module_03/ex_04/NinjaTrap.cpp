/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:44:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 11:45:39 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	this->_ep = 120;
	this->_mep = 120;
	this->_level = 1;
	this->_melee = 60;
	std::cout << "----> 50% NINJ4-TP" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap()
{
	this->_hp = 60;
	this->_mhp = 60;
	this->_ep = 120;
	this->_mep = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor = 0;
	
	std::cout << "NINJ4-TP <" << this->_name << "> \"Hi Dude im a ninja!!\"." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ft2) : ClapTrap(ft2)
{
	// this->_hp = ft2._hp;
	// this->_mhp = ft2._mhp;
	// this->_ep = ft2._ep;
	// this->_mep = ft2._mep;
	// this->_level = ft2._level ;
	// this->_name = ft2._name;
	// this->_melee = ft2._melee;
	// this->_ranged = ft2._ranged;
	// this->_armor = ft2._armor;
	std::cout << "NINJ4-TP <" << this->_name << "> \"Hi Dude im a ninja in copy!!\"." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP <" << this->_name << "> \"Smoke transformation!!\"." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ft2)
{
	std::cout << " Assignation opereator called " << std::endl;
	// this->_hp = ft2._hp;
	// this->_mhp = ft2._mhp;
	// this->_ep = ft2._ep;
	// this->_mep = ft2._mep;
	// this->_melee = ft2._melee;
	// this->_ranged = ft2._ranged;
	// this->_armor = ft2._armor;
	ClapTrap::operator=(ft2);
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> attacks " << target << " at range, causing " << this->_hp << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> attacks " << target << " at melee, causing " << this->_hp << " points of damage!" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	this->_hp = this->_hp - amount + this->_armor;
	if (this->_hp <= 0)
		this->_hp = 0;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "NINJ4-TP <" << this->_name << "> " << amount << " points of Damage. (Hit point = " << this->_hp << " !)" << std::endl;	
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "NINJ4-TP <" << this->_name << "> " << amount << " of Recovery. (Hit point = " << this->_hp << " !)" << std::endl;	
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	this->_ep -= 20;
	if (this->_ep <= 0)
		std::cout << "NINJ4-TP <" << this->_name << "> " <<  " Doesn't have enough energy " << std::endl;	
	else
		std::cout << "NINJ4-TP <" << this->_name << "> " << " special attack to NINJ4-TP<" << target.getName() << ">. - Daaamn im in ur team!" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	this->_ep -= 20;
	if (this->_ep <= 0)
		std::cout << "NINJ4-TP <" << this->_name << "> " <<  " Doesn't have enough energy " << std::endl;	
	else
		std::cout << "NINJ4-TP <" << this->_name << "> " << " special attack to  FR4G-TP<" << target.getName() << ">. (" << this->_ranged << " range damage points) - I'm gonna kill u!"<<std::endl;		
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	this->_ep -= 20;
	if (this->_ep <= 0)
		std::cout << "NINJ4-TP <" << this->_name << "> " <<  " Doesn't have enough energy " << std::endl;	
	else
		std::cout << "NINJ4-TP <" << this->_name << "> " << " special attack to  SC4V-TP<" << target.getName() << ">. (" << this->_melee << " melee damage points) - ODOOOOR!"<<std::endl;		
}

