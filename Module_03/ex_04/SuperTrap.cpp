/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:16:34 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 13:38:25 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : NinjaTrap(), FragTrap()
{
	this->_hp = this->FragTrap::_hp;
	this->_mhp = this->FragTrap::_mhp;
	this->_ep = this->NinjaTrap::_ep;
	this->_mep = this->NinjaTrap::_mep;
	this->_level = 1;
	this->_name = name;
	this->_melee = this->NinjaTrap::_melee;
	this->_ranged = this->FragTrap::_ranged;
	this->_armor =  this->FragTrap::_armor;
	
	std::cout << "SUPER-TP <" << this->_name << "> \"Hi Dude im suuuper!!\"." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &ft2) : NinjaTrap(), FragTrap()
{
	this->_hp = ft2._hp;
	this->_mhp = ft2._mhp;
	this->_ep = ft2._ep;
	this->_mep = ft2._mep;
	this->_level = ft2._level ;
	this->_name = ft2._name;
	this->_melee = ft2._melee;
	this->_ranged = ft2._ranged;
	this->_armor = ft2._armor;
	
	std::cout << "SUPER-TP <" << this->_name << "> \"Hi Dude im suuuper in copy!!\"." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP <" << this->_name << "> \"See u folks!!\"." << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &ft2)
{
	std::cout << " Assignation opereator called " << std::endl;
	this->_hp = ft2._hp;
	this->_mhp = ft2._mhp;
	this->_ep = ft2._ep;
	this->_mep = ft2._mep;
	this->_melee = ft2._melee;
	this->_ranged = ft2._ranged;
	this->_armor = ft2._armor;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::ninjaShoebox(NinjaTrap &target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(FragTrap &target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(ScavTrap &target)
{
	NinjaTrap::ninjaShoebox(target);	
}

void	SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
	FragTrap::vaulthunter_dot_exe(target);
}