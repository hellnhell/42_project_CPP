/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:55 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:05:26 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{

	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &p2);
		virtual ~PlasmaRifle();
		
		PlasmaRifle &operator=(PlasmaRifle const &p2);

		void attack() const;		
};


#endif