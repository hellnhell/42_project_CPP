/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:35 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 11:29:04 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &sm2);
		virtual ~SuperMutant();
		SuperMutant &operator=(SuperMutant const &sm2);
	
		void takeDamage(int);
};

#endif