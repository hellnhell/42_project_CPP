/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:50:27 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 17:29:58 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	srand(time(NULL));
	Bureaucrat b1("b1", 1);
	std::cout << b1 << std::endl;
	Bureaucrat b2("b2", 150);
	std::cout << b2 << std::endl;

	std::cout << "---- SHRUBBERY ----" << std::endl << std::endl;
	Form *shrubbery = new ShrubberyCreationForm("home");
	std::cout << *shrubbery << std::endl;
	shrubbery->beSigned(b1);
	shrubbery->execute(b1);

	Form *shrubbery2 = new ShrubberyCreationForm("home2");
	try
	{
		std::cout << *shrubbery2 << std::endl;
		shrubbery2->beSigned(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *shrubbery2 << std::endl;
		shrubbery2->beSigned(b2);
		shrubbery2->execute(b2);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "------" << std::endl;

	
	std::cout << "---- ROBOTOMY ----" << std::endl << std::endl;
	Form *robot1 = new	RobotomyRequestForm("Your first brain");
	std::cout << *robot1 << std::endl;
	robot1->beSigned(b1);
	robot1->execute(b1);

	Form *robot2 = new RobotomyRequestForm("Your second brain");				
	try
	{
		std::cout << *robot2 << std::endl;
		robot2->beSigned(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "------" << std::endl;

	std::cout << "---- PRESIDENTIAL ----" << std::endl << std::endl;
	Form *presi1 = new	PresidentialPardonForm("Pepa");
	std::cout << *presi1 << std::endl;
	presi1->beSigned(b1);
	presi1->execute(b1);

	Form *presi2 = new PresidentialPardonForm("Pepe");				
	try
	{
		std::cout << *presi2 << std::endl;
		presi2->beSigned(b1);
		presi2->execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "------" << std::endl;

	return 0;
}