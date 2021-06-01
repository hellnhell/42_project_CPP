/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:29:57 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 12:54:50 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		int	_hp;
		int _mhp;
		int _ep;
		int	_mep;
		int _level;
		std::string _name;
		int _melee;
		int	_ranged;
		int _armor;
		
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &ct2);
		~ClapTrap();
		
		ClapTrap &operator=(ClapTrap const &ct2);

		std::string getName();
};

#endif