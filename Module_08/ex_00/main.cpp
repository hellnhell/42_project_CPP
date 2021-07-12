/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:08:54 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 11:35:49 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>


int main()
{
    std::cout << "->VECTORS:" << std::endl;
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);
    try
    {
        std::cout << "Try exception: ";
        std::vector<int>::iterator iter = easyfind(vector, 10);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "N is found in a vector: ";
        std::vector<int>::iterator iter = easyfind(vector, 3);
        std::cout << *iter << std::endl << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "->LIST:" << std::endl;
    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    try
    {
        std::cout << "Try exception: ";
        std::list<int>::iterator iter = easyfind(list, 10);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "N is found in a list: ";
        std::list<int>::iterator iter = easyfind(list, 5);
        std::cout << *iter << std::endl << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "->DEQUE:" << std::endl;
    std::deque<int> deque;
    deque.push_back(1);
    deque.push_back(2);
    deque.push_back(3);
    deque.push_back(4);
    deque.push_back(5);
    try
    {
        std::cout << "Try exception: ";
        std::deque<int>::iterator iter = easyfind(deque, 10);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "N is found in a deque: ";
        std::deque<int>::iterator iter = easyfind(deque, 5);
        std::cout << *iter << std::endl << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    
    
}