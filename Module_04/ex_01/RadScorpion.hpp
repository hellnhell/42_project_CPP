/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:47 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/03 14:28:13 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

class	RadScorpion : public Enemy
{
	private:
		RadScorpion();
		
	public:
		RadScorpion(RadScorpion const &rs2);
		virtual ~RadScorpion();
		RadScorpion &operator=(RadScorpion const &rs2);
	
		void takeDamage(int);
};

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rs2) : Enemy(rs2._hp, rs2._type)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rs2)
{
	Enemy::operator=(rs2);
	return(*this);
}

void	RadScorpion::takeDamage(int damage)
{
	damage -= 2;
	Enemy::::takeDamage(damage);
}

#endif