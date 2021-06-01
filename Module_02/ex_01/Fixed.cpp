/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:56:26 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 12:00:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called." << std::endl;
};

Fixed::Fixed(Fixed const &FixedB)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_value = FixedB._value;
};

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << Fixed::_bits;
};

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << Fixed::_bits));
};

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
};

Fixed &Fixed::operator=(Fixed const &FixedB)
{
	std::cout << "Assignation opereator called " << std::endl;
	this->_value = FixedB.getRawBits();
	return (*this);
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
};

int		Fixed::getRawBits() const
{
	std::cout << "GetRawBits member function called." << std::endl;
	return (this->_value);	
};

void	Fixed::setRawBits(int const rawBits)
{
	std::cout << "SetRawBits member function called." << std::endl;
	this->_value = rawBits;
};

int Fixed::toInt() const
{
	//_value / 2e_bits;
	return (this->_value >> Fixed::_bits);
};

float	Fixed::toFloat() const
{
	//1 * 2e_bits;
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}