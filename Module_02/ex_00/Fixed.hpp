/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:33:42 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 10:40:46 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

class	Fixed
{
	
private:
	int	_value;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &FixedB);
	Fixed &operator = (Fixed const &FixedB);
	int		getRawBits() const;
	void	setRawBits(int const raw);	
};

#endif