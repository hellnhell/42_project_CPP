/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:55:48 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:56:01 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &i2) : AMateria(i2)
{
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
