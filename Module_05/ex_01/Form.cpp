/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:05:23 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 11:18:21 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(std::string const &name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _sign(false)
{	
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &f2) : _name(f2._name), _sign(false), _gradeExec(f2._gradeExec), _gradeSign(f2._gradeSign)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form &Form::operator=(Form const &b2)
{
	this->_sign = b2._sign;
	return (*this);
}

std::string	const &Form::getName() const
{
	return (this->_name);
}

int	const &Form::getGradeSign() const
{
	return (this->_grade);
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High.");
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low.");
}

const	char* Form::AlreadySigned::what() const throw()
{
	return ("Already signed.");
}


std::ostream &operator<<(std::ostream &os, Form const &b2)
{
	os << "<" << b2.getName() << ">, bureaucrat grade <" << b2.getGrade() << ">" << std::endl; 
	return (os);
}
