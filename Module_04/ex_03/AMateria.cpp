/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:51:04 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:38:16 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{	
}

AMateria::AMateria(AMateria const &a2) : _xp(a2._xp), _type(a2._type)
{
}

AMateria::~AMateria()
{	
}

AMateria &AMateria::operator=(AMateria const &a2)
{
	this->_xp = a2._xp;
	this->_type = a2._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
