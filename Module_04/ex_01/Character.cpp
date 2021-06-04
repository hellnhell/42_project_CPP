/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:31:38 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(Character const &c2) : _name(c2._name), _ap(c2._ap), _weapon(c2._weapon)
{
}

Character::~Character()
{
}

Character &Character::operator=(Character const &c2)
{
	this->_name = c2._name;
	this->_ap = c2._ap;
	this->_weapon = c2._weapon;
	return (*this);
}

void	Character::recoverAP()
{
	this->_ap +=10;
	if ( this->_ap > 40)
		this->_ap = 40;
}


void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

std::string const &Character::getName() const
{
	return (this->_name);	
}

int	Character::getAP() const
{
	return(this->_ap);
}

AWeapon *Character::getAwp() const
{
	return (this->_weapon);
}

void	Character::attack(Enemy *enemy)
{
	if (this->_weapon && enemy)
	{
		if (this->_ap < this->_weapon->getAPCost())
			std::cout << this->_name << " hasn't enough AP, can't attack." << std::endl;
		else
		{
			this->_ap -= this->_weapon->getAPCost();
			if (this->_ap < 0)
				this->_ap = 0;
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << "." << std::endl;
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			if(enemy->getHP() == 0)
				enemy->~Enemy();
		}
	}		
}

std::ostream &operator<<(std::ostream &os, Character const &c2)
{
	if (c2.getAwp())
		os << c2.getName() << " has " << c2.getAP() << " AP and wields a " << c2.getAwp()->getName() << std::endl;
	else
		os << c2.getName() << " has " << c2.getAP() << " AP and unarmed " << std::endl; 
	return (os);
}
