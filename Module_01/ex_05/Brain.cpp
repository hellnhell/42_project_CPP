/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:17 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/26 12:10:48 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_stupidity = 10;
}

Brain::~Brain()
{}

std::string Brain::identify() const
{
	const long address = (long)this;
	std::stringstream	ad;
	
	ad << "0x" << std::uppercase << std::hex << address;
	return(ad.str());
}