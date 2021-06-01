/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:33:42 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 11:01:33 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class	Fixed
{
private:
	int	_value;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(Fixed const &FixedB);
	Fixed(int i);
	Fixed(float f);
	~Fixed();
	Fixed &operator = (Fixed const &FixedB);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif