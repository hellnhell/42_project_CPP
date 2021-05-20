/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:55 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 13:57:19 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class	HumanA
{
	private:
			const Weapon	&_weapon;
			const std::string _name;
	public:
			HumanA(std::string const &name, const Weapon &weapon);
			~HumanA();
			void	attack() const;	
};



#endif