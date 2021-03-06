/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:00:06 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 11:02:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

template <typename t>
void    add(t const &var)
{
    const_cast<t &>(var) += 2;
}

template< typename T >
void print(T const  &x )
{
    std::cout << x << std::endl;
    return;
}

int main()
{
    int     iarray[] = {0 , 1, 2, 3, 4, 5, 6};
    char    carray[] = {'w', 'x', 'i'};

    for (int i = 0; i < 7 ; i++)
        std::cout << iarray[i];
    std::cout << std::endl;

    iter(iarray, 7, add);
    
    for (int i = 0; i < 7; i++)
		std::cout << iarray[i];
	std::cout << std::endl;

    std::cout << "-------" << std::endl;

      for (int i = 0; i < 3 ; i++)
        std::cout << carray[i];
    std::cout << std::endl;

    iter(carray, 3, add);
    
    for (int i = 0; i < 3; i++)
		std::cout << carray[i];
	std::cout << std::endl;

    std::cout << "CORRECTION" << std::endl;

	int     tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
    
	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
