/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:54:46 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/29 12:11:18 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s2) :
	Form(s2), _target(s2._target)
{
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s2)
{
	Form::operator=(s2);
	return(*this);
}

std::string  const ShrubberyCreationForm::_tree = 
"                                            . \n"
"                                              .         ;   \n"
"                 .              .              ;%     ;;    \n"
"                   ,           ,                :;%  %;    \n"
"                    :         ;                   :;%;'     .,    \n"
"           ,.        %;     %;            ;        %;'    ,; \n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%' \n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'  \n"
"               ;%;      %;        ;%;        % ;%;  ,%;' \n"
"                `%;.     ;%;     %;'         `;%%;.%;' \n"
"                 `:;%.    ;%%. %@;        %; ;@%;%' \n"
"                    `:%;.  :;bd%;          %;@%;' \n"
"                      `@%:.  :;%.         ;@@%;'    \n"
"                        `@%.  `;@%.      ;@@%;          \n"
"                          `@%%. `@%%    ;@@%;         \n"
"                            ;@%. :@%%  %@@%;        \n"
"                              %@bd%%%bd%%:;      \n"
"                                #@%%%%%:;; \n"
"                                %@@%%%::; \n"
"                                %@@@%(o);  . '          \n"
"                                %@@@o%;:(.,'          \n"
"                            `.. %@@@o%::;          \n"
"                               `)@@@o%::;          \n"
"                                %@@(o)::;         \n"
"                               .%@@@@%::;          \n"
"                               ;%@@@@%::;.           \n"
"                              ;%@@@@%%:;;;.  \n"
"                          ...;%@@@@@%%:;;;;,..  \n";

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::ofstream sfile;
	sfile.open(std::string(this->_target + "__shrubbery").c_str());
	sfile << this->_tree << std::endl << std::endl;
	sfile.close();
}