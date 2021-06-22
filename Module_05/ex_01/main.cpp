/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:50:27 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 12:25:16 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat b1("b1", 2);
	std::cout << "INIT:" << std::endl;
	std::cout << b1 << std::endl;
	
	std::cout << "FIRST TRY:" << std::endl;
	try
	{
		b1.addGrade();
		std::cout << b1 << std::endl;
		b1.subGrade();
		std::cout << b1 << std::endl;
		b1.addGrade();
		b1.addGrade();
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	
	std::cout << "SECOND TRY:" << std::endl;
	try
	{
		Bureaucrat b2("b2", 151);
		b2.subGrade();
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl<< std::endl;
	}
	
	std::cout << "THIRD TRY:" << std::endl;
	try
	{
		Bureaucrat b3("b3", 0);
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}