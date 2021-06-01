/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:12:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/01 11:24:06 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	srand (time(NULL));
	FragTrap ft("Javier");
	ScavTrap st("Gonzalo");
	
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
}