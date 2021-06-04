/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:23 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 10:47:15 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
	private:
		Enemy();
		
	protected:
		int	_hp;
		std::string _type;
		
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &e2);
		virtual ~Enemy();

		Enemy &operator=(Enemy const &e2);
		
		int	getHP() const;
		std::string const &getType() const;
		virtual void takeDamage(int);
};



#endif