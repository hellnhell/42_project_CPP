/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:50:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:41:33 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class	AMateria
{
	private:
		AMateria();
		
	protected:
		unsigned int _xp;
		std::string	_type;

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &a2);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &a2);
		
		std::string const 	&getType() const;
		unsigned int		getXP() const;
		
		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter &target);
};




#endif