/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:11:56 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 14:15:25 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcer.hpp"
#include "Peon.hpp"

int	main()
{
	Sorcer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}