/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:31:44 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/05 13:48:18 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realtype.hpp"

int	main()
{
	srand(time(NULL));
	
	Base *baseP = generate();
	identify_from_pointer(baseP);

	Base *baseR = generate();
	identify_from_reference(*baseR);

	delete baseP;
	delete baseR;
	
	return 0;
};