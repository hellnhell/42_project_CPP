/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:41:58 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/07 14:13:08 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _marines(nullptr), _count(0)
{
}

Squad::Squad(Squad const &s2) : _marines(nullptr), _count(0)
{
}

Squad::~Squad()
{
	if (this->_marines)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_marines[i];
		delete this->_marines;
	}
}

Squad	&Squad::operator=(Squad const &s2)
{
	if (this->_marines)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_marines[i];
		delete this->_marines;
	}
	this->_count = 0;
	for (int i = 0; i < s2.getCount(); i++)
		this->push(s2.getUnit(i)->clone()); //clonas la unidad
	return (*this);
}

int	Squad::getCount() const
{
	return (this->_count);	
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (this->_count == 0 || i < 0 || i >= this->_count)
		return(nullptr); //es un null q se puede convertir a cualquier type. Para compatibilizar con ints
	return (this->_marines[i]);
}

 int Squad::push(ISpaceMarine *m1) //devuelve el n de ud q hay y añade la q entra.
 {
	if (!m1)
		return(this->_count);
	if (this->_count == 0)
	{
		this->_marines = new ISpaceMarine*[1];
		this->_marines[0] = m1;
		this->_count = 1;
	}
	else
	{
		for (int i = 0; i < this->_count; i++)
		{
			if (this->_marines[i] == m1)
				return (this->_count);
		}
		ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i ++)
			tmp[i] = this->_marines[i];
		tmp[this->_count] = m1;
		this->_count++;
		delete[] this->_marines;
		this->_marines = tmp;
	}
	return (this->_count);
 }