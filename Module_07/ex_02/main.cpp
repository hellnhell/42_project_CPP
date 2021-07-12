/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:00:16 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 11:00:17 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> ia;
    Array<int> ib(7);
    Array<int> ic(ib);

    Array<char> ca;
    Array<char> cb(7);
    Array<char> cc(cb);


    std::cout << "------------------- " << std::endl;
    std::cout << "--- INT ARRAYS --- " << std::endl;
    std::cout << "------------------- " << std::endl;
    std::cout << std::endl;

    std::cout << "--- EMPTY ARRAY --- " << std::endl;
    try
	{
		std::cout << &ia << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << std::endl;

    std::cout << "--- SIZE N ARRAY --- " << std::endl;
    
    for (int i = 0; i < 5; i++)
        ib[i] = 2;

	std::cout << ib[4] << std::endl;
	std::cout << ib[10] << std::endl;
    std::cout << std::endl;

    std::cout << "--- OVERLOAD OPERATOR= --- " << std::endl;

    ia = ib;
 
	std::cout << ia[4] << std::endl;
	std::cout << ia[10] << std::endl;
    std::cout << std::endl;

    std::cout << "------------------- " << std::endl;
    std::cout << "--- CHAR ARRAYS --- " << std::endl;
    std::cout << "------------------- " << std::endl;
    std::cout << std::endl;
    std::cout << "--- EMPTY ARRAY --- " << std::endl;

    try
	{
		std::cout << &ca << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << std::endl;

    std::cout << "--- SIZE N ARRAY --- " << std::endl;

    for (int i = 0; i < 7; i++)
		cb[i] = 97 + i;

	for (int i = 0; i < 7; i++)
		std::cout << cb[i] << " ";
	std::cout << std::endl;

	std::cout << cb[8] << " ";
	std::cout << std::endl;

    std::cout << "--- OVERLOAD OPERATOR= --- " << std::endl;

    ca= cb;
	std::cout << ca[4] << std::endl;
	std::cout << ca[10] << std::endl;

    cc = cb;
    Array<char> cd(cc);
	for (int i = 0; i < 7; i++)
		std::cout << cd[i] << " ";
	std::cout << std::endl;

    std::cout << "------------------- " << std::endl;
    std::cout << "--- OTHER ARRAYS --- " << std::endl;
    std::cout << "------------------- " << std::endl;

    Array<float> fa;
    std::cout << &fa << std::endl;

    Array<double> db(5);
    for (int i = 0; i < 5; i++)
        db[i] = i * 0.25;
    for (int i = 0; i < 5; i++)
        std::cout << db[i] << " ";
    std::cout << std::endl;
    
    
    return 0;

}