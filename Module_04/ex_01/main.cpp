/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:58:07 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/04 12:14:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	
	me->equip(pr);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	return 0;
}