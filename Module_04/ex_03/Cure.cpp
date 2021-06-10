/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:55:46 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:50:37 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &i2) : AMateria(i2)
{
}

Cure::~Cure()
{
}


Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
}
