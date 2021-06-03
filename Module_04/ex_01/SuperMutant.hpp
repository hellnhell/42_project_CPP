/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:35 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/03 14:25:38 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

class	SuperMutant : public Enemy
{
	private:
		SuperMutant();
		
	public:
		SuperMutant(SuperMutant const &sm2);
		virtual ~SuperMutant();
		SuperMutant &operator=(SuperMutant const &sm2);
	
		void takeDamage(int);
};

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &sm2) : Enemy(sm2._hp, sm2._type)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &sm2)
{
	Enemy::operator=(sm2);
	return(*this);
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::::takeDamage(damage);
}

#endif