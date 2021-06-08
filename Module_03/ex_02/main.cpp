/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:12:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/08 10:44:19 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	srand (time(NULL));
	FragTrap ft("Javier");
	ScavTrap st("Gonzalo");
	
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
}