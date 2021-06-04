/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:42:04 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 13:27:04 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{

	private:
		ISpaceMarine	**_marines;
		int				_count;
	
	public:
		Squad();
		Squad(Squad const &s2);
		Squad &operator=(Squad const &s2);
		virtual ~Squad();
		
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int	push(ISpaceMarine *);
};

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
		this->push(s2.getUnit(i)->clone()); //???
	return (*this);
}

int	Squad::getCount() const
{
	return (this->_count);	
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (this->_count == 0 || i < 0 || i >= this->_count)
		return(nullptr);
	return (this->_marines[i])	
}



#endif