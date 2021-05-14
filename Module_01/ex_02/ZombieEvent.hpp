/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:25:14 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 16:40:15 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_EVENT_HPP
# define	ZOMBIE_EVENT_HPP

# include <iomanip>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
public:
	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);

private:
	std::string _type;
};

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* newZombie(std::string name);
{
	 
}

#endif