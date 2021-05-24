/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:03 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 12:36:50 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iomanip>
# include <iostream>
# include <string>

class Brain
{
	private:
		int	stupidity;
		
	public:
		Brain();
		~Brain();
		std::string	identify() const; //Te da la direc de memoria en hexadecim
		int	getStupidity() const;
};



#endif