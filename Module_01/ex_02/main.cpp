/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:31:38 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/18 16:57:03 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main()
{
	Zombie			*zombies;
	ZombieEvent		zombies_e;
	
	srand(time(NULL));
	zombies_e.setZombieType("veggie");
	zombies = zombies_e.newZombie("David");
	zombies->announce();
	delete zombies;

	zombies_e.setZombieType("omniv");
	zombies = zombies_e.randomChump();
	zombies->announce();
	delete zombies;
	return (0);	
}