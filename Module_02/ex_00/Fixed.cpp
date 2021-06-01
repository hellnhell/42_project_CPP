/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:56:26 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 10:41:06 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << " Default constructor called." << std::endl;
	this->_value = 0;
};

Fixed::~Fixed()
{
	std::cout << " Destructor called." << std::endl;
};

Fixed::Fixed(Fixed const &FixedB)
{
	std::cout << " Copy constructor called." << std::endl;
	this->_value = FixedB.getRawBits();
};

Fixed &Fixed::operator=(Fixed const &FixedB)
{
	std::cout << " Assignation opereator called " << std::endl;
	this->_value = FixedB.getRawBits();
	return (*this);
};

int		Fixed::getRawBits() const
{
	std::cout << " GetRawBits member function called." << std::endl;
	return (this->_value);	
};

void	Fixed::setRawBits(int const rawBits)
{
	std::cout << " SetRawBits member function called." << std::endl;
	this->_value = rawBits;
};