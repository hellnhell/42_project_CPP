/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:45:31 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/27 11:49:32 by emartin-         ###   ########.fr       */
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
		std::string const &getType() const;
		void setType(std::string const &type);
};

#endif
