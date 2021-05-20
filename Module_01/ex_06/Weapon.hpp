/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:31 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/20 13:58:14 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <sstream>
# include <iomanip>
# include <iostream>
# include <string>

class Weapon
{
private:
		std::string _type;
	
public:
		Weapon();
		Weapon(std::string const &type);
		~Weapon();
		void	setType(std::string const &type);
		std::string const &getType() const;
};



#endif
