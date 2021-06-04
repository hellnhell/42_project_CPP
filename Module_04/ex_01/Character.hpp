/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:16:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
		Character();
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
		
	public:
		Character(std::string const &name);
		Character(Character const &c2);
		virtual ~Character();

		Character &operator=(Character const &c2);
		
		void	recoverAP();
		void	equip(AWeapon*);
		std::string const &getName() const;
		int		getAP() const;
		AWeapon *getAwp() const;
		void	attack(Enemy*);
		
};

std::ostream &operator<<(std::ostream &os, Character const &c2);



#endif