/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:56:34 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:47:24 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &c2);
		virtual ~Cure();

		Cure &operator=(Cure const &c2);
		
		AMateria*	clone() const;
		void		use(ICharacter &target);
};

#endif