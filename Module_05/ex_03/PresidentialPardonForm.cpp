/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:55:48 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/29 10:36:52 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s2) :
	Form(s2), _target(s2._target)
{
};

PresidentialPardonForm::~PresidentialPardonForm()
{
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &s2)
{
	Form::operator=(s2);
	return(*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << "<" << this->_target << "> has been pardoned by Zafod Beeblebrox." << std::endl << std::endl;
}