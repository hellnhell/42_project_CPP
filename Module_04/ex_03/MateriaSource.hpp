/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:57:02 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/10 12:44:09 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
#include <string>

class	MateriaSource: public IMateriaSource
{
	private:
		int	_amount;
		AMateria *_source[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &m2);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &m2);

		void	learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);
	
};

#endif