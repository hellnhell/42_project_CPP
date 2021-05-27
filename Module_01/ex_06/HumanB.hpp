/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:46:08 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/24 11:24:26 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	private:
			Weapon const	 *_weapon;
			std::string 	_name;
	public:
			HumanB(std::string const &name);
			~HumanB();
			void	attack();
			void	setWeapon(const Weapon &weapon);
};


#endif