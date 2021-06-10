/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:51:19 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:51:19 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP


# include "AMateria.hpp"
# include <iostream>

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &i2);
		virtual ~Ice();

		Ice &operator=(Ice const &i2);
		
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif