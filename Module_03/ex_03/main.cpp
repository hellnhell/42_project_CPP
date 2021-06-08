/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:12:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 10:53:27 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int	main()
{
	srand (time(NULL));
	FragTrap ft("Javier");
	ScavTrap st("Gonzalo");
	NinjaTrap n1("Adri");
	NinjaTrap n2("Raul");
	
	st.challengeNewcomer("Javier");
	ft.rangedAttack("Gonzalo");
	st.takeDamage(20);
	ft.meleeAttack("Gonzalo");
	st.takeDamage(30);
	st.beRepaired(200);
	st.meleeAttack("Javier");
	ft.takeDamage(20);
	st.rangedAttack("Javier");
	ft.takeDamage(15);
	ft.beRepaired(150);
	ft.vaulthunter_dot_exe("Gonzalo");
	ft.vaulthunter_dot_exe("Gonzalo");
	ft.vaulthunter_dot_exe("Gonzalo");
	ft.vaulthunter_dot_exe("Gonzalo");

	n2.rangedAttack("Gonzalo");
	n2.takeDamage(20);
	n2.meleeAttack("Gonzalo");
	n2.beRepaired(150);
	n1.ninjaShoebox(ft);
	n1.ninjaShoebox(st);
	n1.ninjaShoebox(n2);

	return 0;
}