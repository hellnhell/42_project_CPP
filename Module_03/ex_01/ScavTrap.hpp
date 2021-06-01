/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:46 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 11:23:52 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
	private:
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
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &st2);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const &st2);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);
};

#endif