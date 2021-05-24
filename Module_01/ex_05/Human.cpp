/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:14 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 12:40:50 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
	this->_brain.~Brain();
}

Brain	&Human::getBrain()
{
	return(this->_brain);
}

std::string	Human::identify()
{
	return (this->_brain.Brain::identify());
}
