/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:43:12 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:56:45 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif