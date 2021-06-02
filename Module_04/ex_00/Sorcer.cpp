/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:10:02 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 14:21:06 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcer.hpp"


Sorcer::Sorcer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;	
}

Sorcer::Sorcer(Sorcer const &s2) : _name(s2._name), _title(s2._title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;		
}

Sorcer::~Sorcer()
{
	std::cout << this->_name << ", " << this->_title <<", is dead. Consequences will never be the same"<< std::endl;	
}

Sorcer	&Sorcer::operator=(Sorcer &sorcer)
{
	this->_name = sorcer._name;
	this->_title = sorcer._title;
	return (*this);
}

std::string const &Sorcer::getName() const
{
	return(this->_name);
}

std::string const &Sorcer::getTitle() const
{
	return(this->_title);
}

void Sorcer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, Sorcer const &sorcer)
{
	os << "I am " << sorcer.getName() << ", " << sorcer.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
