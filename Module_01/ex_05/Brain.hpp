/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:13:03 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/26 12:08:15 by emartin-         ###   ########.fr       */
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
		int	_stupidity;
		
	public:
		Brain();
		~Brain();
		std::string	identify() const;
};



#endif