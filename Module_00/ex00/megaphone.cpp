/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:25:53 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/10 11:38:48 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

void	megaphone(int argc, char **argv)
{
	for (int i = 1; i < argc; i += 1)
	{
		for (int j = 0; j < strlen(argv[i]); j += 1)
			std::cout << (char)toupper(argv[i][j]);
	}	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}


int	main(int argc, char **argv){
	
	megaphone(argc, argv);
	return 0;
}