/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:16:56 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 13:51:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"



class SuperTrap : public FragTrap, public NinjaTrap
{		
	public:
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &ft2);
		virtual ~SuperTrap();

		SuperTrap &operator=(SuperTrap const &ft2);
		
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	ninjaShoebox(NinjaTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(ScavTrap &target);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
