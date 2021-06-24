/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:31:02 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 17:44:04 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern const &i);
	~Intern();

	Intern &operator=(Intern const &i);

	Form *makeForm(std::string const formName, std::string const target);

	class InvalidForm: public std::exception {
		virtual const char *what() const throw();
	};
};

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

Form *new_shrub(std::string const &target)
{
	return(new ShrubberyCreationForm(target));
}

Form *new_robot(std::string const &target)
{
	return(new RobotomyRequestForm(target));
}

Form *new_presi(std::string const &target)
{
	return(new PresidentialPardonForm(target));
}


#endif