/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:56:28 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:38:38 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_invent[i] = nullptr;
}

Character::Character(Character const &c2)
{
	this->_name = c2._name;
	this->_count = c2._count;

	for ( int i = 0; i < this->_count; i++)
		this->_invent[i] = c2._invent[i]->clone();
	for (int i = 0; i < 4; i++)
		this->_invent[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->_count; i++)
		delete (this->_invent[i]);
}

Character &Character::operator=(Character const &c2)
{
	this->_name = c2._name;
	for (int i = 0; i < this->_count; i++)
		delete this->_invent[i];
	this->_count = c2._count;
	for (int i = 0; i < this->_count; i++)
		delete this->_invent[i];
	for (int i = 0; i < 4; i++)
		this->_invent[i] = nullptr;
	return (*this);
}

std::string const &Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria *materia)
{
	if (this->_count == 4 || materia == nullptr)
		return;
	for	(int i = 0; i < this->_count; i++)
	{
		if(this->_invent[i] == materia)
			return;
	}
	this->_invent[this->_count++] = materia;

}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_count || this->_invent[idx] == nullptr)
		return;
	for (int i = idx; i < 3; i++)
	{
		this->_invent[i] = this->_invent[i + 1];
		this->_invent[i + 1] = nullptr;
	}
	this->_count--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_count || this->_invent[idx] == nullptr)
		return;
	this->_invent[idx]->use(target);
		
}
