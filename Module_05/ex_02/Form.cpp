/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:05:23 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/29 12:09:58 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(std::string const &name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signd(false)
{	
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &f2) : _name(f2._name), _signd(false), _gradeExec(f2._gradeExec), _gradeSign(f2._gradeSign)
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
	this->_signd = b2._signd;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int	Form::getGradeExec() const
{
	return (this->_gradeExec);
}

bool		Form::getSigned() const
{
	return(this->_signd);
}

void	Form::beSigned(Bureaucrat const &b)
{
	if(b.getGrade() > this->_gradeSign)
		throw (Form::GradeTooLowException());
	else if (this->_signd == true)
		throw (Form::AlreadySigned());
	else
		std::cout << "Sign OK" << std::endl  << std::endl;
	this->_signd = true;
		
}

void Form::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > getGradeExec())
		throw (GradeTooLowException());
	else if (!getSigned())
		throw (notSigned());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low.");
}

const char* Form::AlreadySigned::what() const throw()
{
	return ("Already signed.");
}

const char *Form::notSigned::what() const throw()
{
	return ("Not Signed");
}

std::ostream &operator<<(std::ostream &os, Form const &b2)
{
	
	if (b2.getSigned())
		os << "<" << b2.getName() << "> form it's signed, with a sign grade of <"
		<< b2.getGradeSign() << "> and an exec grade of <" << b2.getGradeExec() << ">" << std::endl;
	else
		os << "<" << b2.getName() << "> form it's NOT signed, with a sign grade of <"
		<< b2.getGradeSign() << "> and an exec grade of <" << b2.getGradeExec() << ">" << std::endl;
	return (os);
}
