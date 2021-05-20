/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:46:08 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 13:23:52 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	private:
			Weapon	 *_weapon;
			std::string _name;
	public:
			HumanB(std::string const &name);
			~HumanB();
			void	attack();
			void	setWeapon(const Weapon &weapon);
};

HumanB::HumanB(std::string const &name)
{
	this->_name = name;
}

void	HumanB::attack()
{
	std::cout << this->_name << "has a " << this->_weapon->getType() << " weapon" << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = &weapon;
}
#endif