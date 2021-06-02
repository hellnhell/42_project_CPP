/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:12:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/02 11:24:05 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int	main()
{
	srand (time(NULL));
	FragTrap ft("Gonzalo");
	ScavTrap st("Javier");
	NinjaTrap n1("Adri");
	NinjaTrap n2("Raul");
	
	st.challengeNewcomer("Gonzalo");
	ft.rangedAttack("Javier");
	st.takeDamage(20);
	ft.meleeAttack("Javier");
	st.takeDamage(30);
	st.beRepaired(200);
	st.meleeAttack("Gonzalo");
	ft.takeDamage(20);
	st.rangedAttack("Gonzalo");
	ft.takeDamage(15);
	ft.beRepaired(150);
	ft.vaulthunter_dot_exe("Javier");
	ft.vaulthunter_dot_exe("Javier");
	ft.vaulthunter_dot_exe("Javier");
	ft.vaulthunter_dot_exe("Javier");
	ft.vaulthunter_dot_exe("Javier");
	n2.rangedAttack("Gonzalo");
	n2.takeDamage(20);
	n2.meleeAttack("Gonzalo");
	n2.beRepaired(150);
	n1.ninjaShoebox(ft);
	n1.ninjaShoebox(st);
	n1.ninjaShoebox(n2);

	return (0);

}