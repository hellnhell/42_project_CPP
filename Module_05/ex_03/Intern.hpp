/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:31:02 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/28 11:57:33 by emartin-         ###   ########.fr       */
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
	Form* new_presi(std::string target);
    Form* new_robot(std::string target);
    Form* new_shrub(std::string target);

public:
	Intern();
	Intern(Intern const &i);
	virtual ~Intern();

	Intern &operator=(Intern const &i);

	Form *makeForm(std::string const &formName, std::string const &target);
	typedef Form*(Intern::*InternFPointer)(std::string);

	class InvalidForm: public std::exception {
		virtual const char *what() const throw();
	};
};

#endif