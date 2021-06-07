/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:42:04 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/07 13:32:42 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{

	private:
		ISpaceMarine	**_marines;
		int				_count;
	
	public:
		Squad();
		Squad(Squad const &s2);
		Squad &operator=(Squad const &s2);
		virtual ~Squad();
		
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int	push(ISpaceMarine *);
};

#endif