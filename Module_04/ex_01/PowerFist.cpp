/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:07 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:13:43 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const &p2) : AWeapon(p2._name, p2._apcost, p2._damage)
{}

PowerFist::~PowerFist()
{}

PowerFist &PowerFist::operator=(PowerFist const &p2)
{
	AWeapon::operator=(p2);
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}