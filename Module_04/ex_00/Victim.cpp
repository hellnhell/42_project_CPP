/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:10:28 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 13:57:38 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeard!" << std::endl;
}

Victim::Victim(Victim const &v2) : _name(v2._name)
{
	std::cout << "Some random victim called " << this->_name << " just appeard!" << std::endl;
	
}

Victim::~Victim()
{
	std::cout << "Victim "<< this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(Victim &v2)
{
	this->_name = v2._name;
	return (*this);
}


std::string	const &Victim::getName() const
{
	return(this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &victim)
{
	os << "I'm " << victim.getName() << " and I like others!" <<std::endl;
	return (os);
}
