/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:45 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/03 13:56:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

class	AWeapon
{
	private:
		AWeapon();
		
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
	public:
	
		AWeapon(std::stirng const &name, int apcost, int damage);
		AWeapon(AWeapon const &a2);
		virtual ~AWeapon();
		
		AWeapon &operator=(AWeapon const &a2);
		
		std::string	const &getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;		
};


#endif