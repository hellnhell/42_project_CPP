/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:41:20 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/07 14:10:11 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

		std::cout << "////////////////////////////////" << std::endl;

	ISpaceMarine* bab = new TacticalMarine;
	ISpaceMarine* jam = new AssaultTerminator;
	ISpaceMarine* beb = new TacticalMarine;
	ISpaceMarine* jem = new AssaultTerminator;
	ISpaceMarine* bub = new TacticalMarine;
	ISpaceMarine* jum = new AssaultTerminator;

	ISquad* big = new Squad;

	big->push(bab);
	big->push(jam);
	big->push(beb);
	big->push(jem);
	big->push(bub);
	big->push(jum);
	big->push(nullptr);
	big->getUnit(100);
	std::cout << big->getCount() << " Units in squad" << std::endl;

	delete big;

	return 0;
}
