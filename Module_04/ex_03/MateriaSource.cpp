/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:56:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:52:19 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &m2)
{

	this->_amount = m2._amount;

	for ( int i = 0; i < this->_amount; i++)
		this->learnMateria(m2._source[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_amount; i++)
		delete (this->_source[i]);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &m2)
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_source[i];
	this->_amount = 0;
	for (int i = 0; i < this->_amount; i++)
		this->learnMateria(m2._source[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
	return (*this);
}



void	MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_amount == 4 || materia == nullptr)
		return;
	for	(int i = 0; i < this->_amount; i++)
	{
		if(this->_source[i] == materia)
			return;
	}
	this->_source[this->_amount++] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_amount; i++)
	{
		if(this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	}
	return (nullptr);
}
