/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realtype.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:02:10 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/05 13:45:14 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REALTYPE_HPP
# define REALTYPE_HPP

# include <iostream>
# include <string>

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *generate();
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif