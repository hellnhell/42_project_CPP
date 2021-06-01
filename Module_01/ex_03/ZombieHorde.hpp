/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:25:14 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 11:38:30 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIEHORDE_HPP
# define	ZOMBIEHORDE_HPP

# include <iomanip>
# include <string>
# include <iostream>
# include <cstdlib>

# include "Zombie.hpp"

class ZombieHorde
{
	public:
			ZombieHorde(int n);
			~ZombieHorde();
			void	announce();
	
	private:
			int	_n;
			static std::string	_list[];
			Zombie *_zombie;
};

#endif