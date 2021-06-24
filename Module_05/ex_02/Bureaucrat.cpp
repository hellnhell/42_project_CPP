/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:50:03 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 16:00:07 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &b2) 
{
	*this = b2;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b2)
{
	this->_grade = b2._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::addGrade()
{
	if (this->_grade <= 1)
		throw	Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::subGrade()
{
	if (this->_grade >= 150)
		throw	Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const	char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High.");
}

const	char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low.");
}

void	Bureaucrat::signForm(Form &form) const
{
	if (this->_grade <= form.getGradeSign())
		std::cout << "<" << this->_name << "< signs <" << form.getName() << ">";
	else
		std::cout << "<" << this->_name << " cannot sign <" << form.getName() <<"> because ";
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const &form) const
{
	if (!form.getSigned())
		throw Form::notSigned();
	else if (form.getGradeExec() < this->_grade)
		throw Form::GradeTooLowException();
	else
		std::cout << *this << "-> executes " << form << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b2)
{
	os << "<" << b2.getName() << ">, bureaucrat grade <" << b2.getGrade() << ">" << std::endl; 
	return (os);
}
