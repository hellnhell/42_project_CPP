/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:56:50 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 13:33:40 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
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
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &ft2);
		~FragTrap();
		FragTrap &operator=(FragTrap const &ft2);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif