/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:05:09 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 11:33:30 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string color)
{
	Pony	pony(color);
	
	pony.changeColor();	
	std::cout << " on the Stack." << std::endl;;
}

void	ponyOnTheHeap(std::string color)
{
	Pony	*pony = new Pony(color);
	
	pony->changeColor();
	std::cout << " on the Heap.";
	delete pony;
}

int	main()
{
	ponyOnTheStack("Blue");
	ponyOnTheHeap("Green");
	// system ("leaks Pony");
	return (0);
}