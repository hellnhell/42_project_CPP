/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:11 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/24 14:21:17 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Human
{
private:
	Brain _brain;
	
public:
	Human();
	~Human();
	std::string	identify();
	Brain	&getBrain();
};

#endif