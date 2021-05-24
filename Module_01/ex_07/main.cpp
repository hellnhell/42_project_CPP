/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:45:30 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/24 14:18:02 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{	
	if (argc == 4)
		Replace rFile(argv[1], argv[2], argv[3]);
	else
		std::cout << "Error: Wrong Arguments." << std::endl;
	return (0); 
}