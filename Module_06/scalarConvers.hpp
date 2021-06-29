/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConvers.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:34:00 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/29 12:54:57 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERS_HPP
# define SCALARCONVERS_HPP

# include <string>
# include <cstring>
# include <limits>
# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <math.h>

class Scalar
{
private:
	Scalar();
	std::string	_input;
	int			_type;
	char		_c;
	int			_i;
	float		_f;
	double		_d;
	int			_decimals;
	bool		_iError;
	bool		_fError;
	bool		_dError;

public:
	Scalar(std::string	input);
	Scalar(Scalar const &s);
	~Scalar();

	Scalar	&operator=(Scalar const &s);
	
	void	fromChar();
	void	fromInt();
	void	fromDouble();
	void	fromFloat();
	void	fromOther();
	
	class InputError: public std::exception{
		virtual const char *what() const throw();
	};
};

Scalar::Scalar(std::string input)
{
}

Scalar::Scalar(Scalar const &s)
{
}

Scalar::~Scalar()
{
}

Scalar &Scalar::operator=(Scalar const &s)
{
	return (*this);
}

const char *Scalar::InputError::what() const throw()
{
	return ("Input Error");
}

#endif