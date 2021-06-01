/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:12:05 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 13:32:09 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	srand (time(NULL));
	FragTrap robot1("Javier");
	
	robot1.rangedAttack("Gonzalo");
	robot1.meleeAttack("Gonzalo");
	robot1.takeDamage(130);
	robot1.beRepaired(200);
	robot1.takeDamage(0);
	robot1.takeDamage(42);
	robot1.vaulthunter_dot_exe("Gonzalo");
	robot1.vaulthunter_dot_exe("Gonzalo");
	robot1.vaulthunter_dot_exe("Gonzalo");
	robot1.vaulthunter_dot_exe("Gonzalo");
	robot1.vaulthunter_dot_exe("Gonzalo");
}