/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:59:40 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 10:59:43 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;

	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "---- CLASSES ---- " << std::endl;
	Awesome aws1(4);
	Awesome aws2(5);

	::swap( aws1, aws2);
	std::cout << "swap: aws1->" << aws1 << " aws2->" << aws2 << std::endl;
	if (aws1 == ::min( aws1, aws2))
		std::cout <<"min is asw1: " << aws1 << std::endl;
	else
		std::cout <<"min is asw2: " << aws2 << std::endl;

	if (aws1 == ::max( aws1, aws2))
		std::cout <<"max is asw1: " << aws1 << std::endl;
	else
		std::cout <<"max is asw2: " << aws2 << std::endl;
		
	return (0);
}