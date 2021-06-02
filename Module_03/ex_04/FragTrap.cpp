/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:56:22 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 11:50:59 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ranged = 20;
	this->_armor = 5;
	std::cout << "----> 50% FR4G-TP " << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap()
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 100;
	this->_mep = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee = 30;
	this->_ranged = 20;
	this->_armor = 5;
	
	std::cout << "FR4G-TP <" << this->_name << "> \"Hi Dude im under construction!!\"." << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft2) : ClapTrap(ft2)
{	
	std::cout << "FR4G-TP <" << this->_name << "> \"Hi Dude im in copy!!\"." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << this->_name << "> \"F*** u im leaving!!\"." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ft2)
{
	std::cout << " Assignation opereator called " << std::endl;
	ClapTrap::operator=(ft2);
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " at range, causing " << this->_hp << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " at melee, causing " << this->_hp << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hp = this->_hp - amount + this->_armor;
	if (this->_hp <= 0)
		this->_hp = 0;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "FR4G-TP <" << this->_name << "> " << amount << " points of Damage. (Hit point = " << this->_hp << " !)" << std::endl;	
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "FR4G-TP <" << this->_name << "> " << amount << " of Recovery. (Hit point = " << this->_hp << " !)" << std::endl;	

}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"Punch", "Push", "Strike", "Stab", "Split"};
	int	attack;
	
	this->_ep -= 25;
	attack = rand() % 5;
	if (this->_ep <= 0)
		std::cout << "FR4G-TP <" << this->_name << "> " <<  " Doesn't have enough energy " << std::endl;	
	else
		std::cout << "FR4G-TP <" << this->_name << "> " << attacks[attack] << " " << target << ". Damage points = " << (attack + 1) * 10 << "!!" <<std::endl;		
}