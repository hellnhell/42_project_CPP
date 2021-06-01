/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:18:52 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/27 10:54:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){}

ZombieEvent::~ZombieEvent(){}

std::string ZombieEvent::_list[9] = {"Henry", "Pablo", "Francis", "Alicee", "Joseph", "Mark", "Damien", "Paul", "George"};

void	ZombieEvent::setZombieType(std::string type)
{
	this->_etype = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_etype));
}

Zombie *ZombieEvent::randomChump(void)
{
	return ZombieEvent::newZombie(_list[std::rand() % 9]);
}
