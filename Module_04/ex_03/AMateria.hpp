/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:50:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 12:02:21 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include "ICharacter.hpp"
# include <iostream>

class	AMateria
{
	protected:
		AMateria();
		unsigned int _xp;

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &a2);
		virtual ~AMateria();

		std::stringconst &getType() const;
		unsigned int getXP() const;
		
		virtual AMateria *clone() const = 0;
		virtual void use(ICharcter &target);
}

#endif