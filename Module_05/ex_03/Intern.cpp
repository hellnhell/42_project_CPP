/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:31:10 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/28 13:10:53 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &i)
{
	(void)i;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &i)
{
	(void)i;
	return (*this);
}

Form *Intern::new_shrub(std::string target)
{
	return(new ShrubberyCreationForm(target));
}

Form *Intern::new_robot(std::string target)
{
	return(new RobotomyRequestForm(target));
}

Form *Intern::new_presi(std::string target)
{
	return(new PresidentialPardonForm(target));
}

const char *Intern::InvalidForm::what() const throw()
{
	return ("Form Not Defined");
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	std::string	names[3] = {"shrubbery", "robotomy", "presidential"};
	InternFPointer functions[3] = {&Intern::new_shrub, &Intern::new_robot, &Intern::new_presi};
	for (int i = 0; i < 3; i++)
	{
		if(formName == names[i])
			return (this->*functions[i])(target);
	}
	throw (InvalidForm());
}