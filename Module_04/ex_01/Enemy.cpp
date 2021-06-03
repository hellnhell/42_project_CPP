/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:23 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/03 14:15:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &e2) : _hp(e2._hp), _type(e2._type)
{
}

Enemy	&Enemy::operator=(Enemy const &e2)
{
	this->hp = e2._hp;
	this->_type = e2._type;
	return(*this);
}

int	Enemy::getHP()
{
	return(this->_hp);
}

std::string const &Enemy::getType() const
{
	return (this->_type);
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->_hp -= damage;
		if (this->_hp < 0)
			this->_hp  = 0; 
}
