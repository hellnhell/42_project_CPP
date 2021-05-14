/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:20:27 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 16:25:09 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
private:
	std::string	type;
	std::string name;
	
public:
	void	announce()
	{
		std::cout << name << type << " Braiiiiiiiiiinnnnnsss";
	};
	
};

#endif
