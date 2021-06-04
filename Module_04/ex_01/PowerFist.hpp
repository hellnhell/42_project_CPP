/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:07 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:05:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{

	public:
		PowerFist();
		PowerFist(PowerFist const &p2);
		virtual ~PowerFist();
		
		PowerFist &operator=(PowerFist const &p2);

		void attack() const;		
};




#endif