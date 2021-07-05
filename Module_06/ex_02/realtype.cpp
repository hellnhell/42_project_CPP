/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realtype.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:02:19 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/05 13:50:06 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realtype.hpp"

Base::~Base(){};

Base *generate()
{
	int	i = rand() % 3;
	if (i == 0)
	{
		std::cout << "-> A created" << std::endl;
		return new(A);
	}
	else if (i == 1)
	{
		std::cout << "-> B created" << std::endl;
		return new(B);
	}
	else{		
		std::cout << "-> C created" << std::endl;
		return new(C);
	}
};

void	identify_from_pointer(Base *p)
{
	try 
	{	
		if (dynamic_cast<A*>(p))
			std::cout << " A" << std::endl;
		if (dynamic_cast<B*>(p))
			std::cout << " B" << std::endl;
		if (dynamic_cast<C*>(p))
			std::cout << " C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << &e << std::endl;
	}
};

void	identify_from_reference(Base &p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << " A" << std::endl;
		if (dynamic_cast<B*>(&p))
			std::cout << " B" << std::endl;
		if (dynamic_cast<C*>(&p))
			std::cout << " C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << &e << std::endl;
	}
};
