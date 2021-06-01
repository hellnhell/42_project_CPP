/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_04.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:00:38 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 11:42:43 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &r = str;
	
	std::cout << "This is the pointer: " << *p << std::endl;
	std::cout << "This is the reference: " << r << std::endl;
	return 0;
}