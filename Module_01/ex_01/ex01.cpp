/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:00:04 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 16:15:04 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void	memoryLeak()
{
	std::string *panther = NULL;
	if (!(panther =  new std::string ("String panther")))
	{
		std::cout << "Error memory allocation";
		exit (0);
	}
	else
		std::cout << *panther << std::endl;
	delete panther;
}

int	main()
{
	memoryLeak();
	system ("leaks ex01");
	return (0);
}