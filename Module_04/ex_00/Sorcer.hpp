/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:09:56 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 12:25:03 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCER_HPP
# define SORCER_HPP

# include <iostream>
# include "Victim.hpp"


class	Sorcer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcer();
	
	public:
		Sorcer(std::string name, std::string title);
		Sorcer(Sorcer const &s2);
		virtual ~Sorcer();

		Sorcer &operator=(Sorcer &s2);
		std::string	const &getName() const;
		std::string	const &getTitle() const;
		void polymorph(Victim const &) const;

};

std::ostream &operator<<(std::ostream &os, Sorcer const &sorcer);

#endif