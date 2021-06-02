/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:10:20 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 14:19:20 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
	private:
		Peon(); //The class cant be init without params
	
	public:
		Peon(std::string name);
		Peon(Peon const &v2);
		virtual ~Peon();

		Peon &operator=(Peon &v2);
		
		void getPolymorphed() const;
};

#endif