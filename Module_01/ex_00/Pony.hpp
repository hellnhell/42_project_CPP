/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:05:13 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 14:10:54 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iomanip>
# include <iostream>
# include <string>

class	Pony
{
private:
		std::string	_color;

public:
		Pony(std::string color);
		~Pony(void);
		void	run(std::string color, Pony *pony);
};

#endif
