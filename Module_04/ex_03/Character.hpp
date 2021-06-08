/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:56:31 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 12:05:29 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class ICharacter
{
public:
Character(std::string cont &name);
Character(Character const &c2);

virtual ~Character() {};



};

#endif