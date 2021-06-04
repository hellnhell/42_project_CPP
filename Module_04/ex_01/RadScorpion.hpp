/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:47 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:04:10 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &rs2);
		virtual ~RadScorpion();
		RadScorpion &operator=(RadScorpion const &rs2);
	
		void takeDamage(int);
};

#endif