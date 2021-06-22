/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:58:07 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/22 11:32:26 by emartin-         ###   ########.fr       */
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
	
	Enemy* mutant = new SuperMutant();
	Enemy* scorpion = new RadScorpion();
	AWeapon* plasma = new PlasmaRifle();
	AWeapon* power = new PowerFist();
	
	me->equip(power);
	std::cout << *me;
	
	me->equip(power);
	me->attack(scorpion);
	std::cout << *me;
	
	me->equip(plasma);
	std::cout << *me;
	
	me->attack(mutant);
	std::cout << *me;
	
	me->attack(scorpion);
	std::cout << *me;
	
	delete (me);
	delete (plasma);
	delete (power);
	return 0;
}