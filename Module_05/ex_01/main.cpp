/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:50:27 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 12:53:07 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat b1("b1", 2);
	Form	form("form1", 2, 20);

	std::cout << "INIT:" << std::endl;
	std::cout << b1 << std::endl;	
	std::cout << form << std::endl;
	
	
	std::cout << "FIRST TRY:" << std::endl;
	try
	{
		form.beSigned(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	try
	{
		form.beSigned(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	
	std::cout << "SECOND TRY:" << std::endl;
	try
	{
		Form form2("form2", 152, 20);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	try
	{
		Form form3("form3", 0, 20);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	
	std::cout << "THIRD TRY:" << std::endl;

	Form form4("form4", 120, 30);
	Bureaucrat b2("b2", 125);
	try
	{
		b2.signForm(form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		b2.signForm(form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}