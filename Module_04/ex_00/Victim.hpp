/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:10:46 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 12:49:12 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
#include <cctype>

class	Victim
{
	protected:
		std::string	_name;
		Victim(); //The class cant be init without params
	
	public:
		Victim(std::string name);
		Victim(Victim const &v2);
		virtual ~Victim();

		Victim &operator=(Victim &v2);
		
		std::string	const &getName() const;
		virtual void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &os, Victim const &victim);



#endif