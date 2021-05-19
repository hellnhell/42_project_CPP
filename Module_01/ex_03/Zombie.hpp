/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:20:27 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/19 13:31:30 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie();
		void	setZombie(std::string name, std::string type);
		void	scream();
		void	announce();
		
private:
		std::string	_type;
		std::string _name;
	
};
#endif

