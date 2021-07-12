/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:50:10 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 14:02:30 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    srand(time(NULL));

    Span sp = Span(5);
    
    try
    {
        std::cout << "One number: " << std::endl;
        std::cout << "->Try one number exception: ";
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n' << std::endl;
    }

    try
    {
        std::cout << "Adding some numbers: " << std::endl;
        sp.addNumber(2);
        sp.addNumber(4);
        sp.addNumber(10);
        sp.addNumber(5);
        std::cout << "-> Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "-> Longest Span: " << sp.longestSpan() << std::endl;
        std::cout << "-> Try Max size exception: ";
        sp.addNumber(1);
        sp.addNumber(9);
        std::cout << "-> Longest Span: " << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n' << std::endl;
    }

    Span sp2 = Span(1001);
    for (int i = 0; i <= 1000; i++)
        sp2.addNumber(rand());
    try
    {
        std::cout << "1000 numbers span: " << std::endl;
        std::cout << "-> Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "-> Longest Span: " << sp.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    return 0;    
}