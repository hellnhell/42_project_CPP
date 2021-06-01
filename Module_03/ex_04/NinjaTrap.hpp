/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:44:30 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 13:43:35 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{	
	protected:
		NinjaTrap();
		
	public:
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &ft2);
		virtual ~NinjaTrap();

		NinjaTrap &operator=(NinjaTrap const &ft2);
		
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	ninjaShoebox(NinjaTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(ScavTrap &target);

};

#endif