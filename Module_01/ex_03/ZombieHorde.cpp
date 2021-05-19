/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:18:52 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/19 13:43:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::_list[9] = {"Henry", "Pablo", "Francis", "Alicee", "Joseph", "Mark", "Damien", "Paul", "George"};

ZombieHorde::ZombieHorde(int n)
{
	srand (time(NULL));
	this->_n = n;
	this->_zombie = new Zombie[n];
	for(int i = 0; i < _n; i++)
	{
		this->_zombie[i].setZombie(_list[std::rand() % 9], "carniv");
		this->_zombie[i].scream();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombie;
	std::cout << "Zombies are gone" << std::endl;
}

void	ZombieHorde::announce()
{
	for(int i = 0; i < _n; i++)
		this->_zombie[i].Zombie::announce();
}

