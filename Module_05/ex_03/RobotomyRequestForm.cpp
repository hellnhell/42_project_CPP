/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:55:17 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/29 10:37:17 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &s2) :
	Form(s2), _target(s2._target)
{
};

RobotomyRequestForm::~RobotomyRequestForm()
{
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &s2)
{
	Form::operator=(s2);
	return(*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	if (rand() % 2)
		std::cout << "Bzzzzzz Bzzzzz <" << this->_target << "> has been robotomized successfully" << std::endl  << std::endl;
	else
		std::cout << "<" << this->_target << "> robotomized failure!" << std::endl  << std::endl;
}