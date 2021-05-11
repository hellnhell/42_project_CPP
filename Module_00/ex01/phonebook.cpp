/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:32:59 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/11 14:40:11 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
void	search(Contact *book, int count)
{
	if (count > 0)
	{
		std::cout << book->_firstName  << " is your 1st contact" << std::endl;
		std::cout << book->_lastname  << " is your 1st contact" << std::endl;
		std::cout << book->_nickname  << " is your 1st contact" << std::endl;
		std::cout << book->_login  << " is your 1st contact" << std::endl;
		std::cout << book->_address  << " is your 1st contact" << std::endl;
		std::cout << book->_email  << " is your 1st contact" << std::endl;
		std::cout << book->_phone  << " is your 1st contact" << std::endl;
		std::cout << book->_birthday  << " is your 1st contact" << std::endl;
		std::cout << book->_meal  << " is your 1st contact" << std::endl;
		std::cout << book->_underwear  << " is your 1st contact" << std::endl;
		std::cout << book->_secret  << " is your 1st contact" << std::endl;
		std::cout << "You can ADD a new contact or EXIT" << std::endl;
	}
	else
		std::cout << "No contacts in your PhoneBook. ADD new contacts" << std::endl;
}

void	add_contacts(Contact *book, int count)
{
	std::cout << "Enter your name" << std::endl;
	book->setFirstName(book->get());
	std::cout << "Enter your last name" << std::endl;
	book->setLastName(book->get());
	std::cout << "Enter your nickname" << std::endl;
	book->setNickName(book->get());
	std::cout << "Enter yout login" << std::endl;
	book->setLogin(book->get());
	std::cout << "Enter your postal address" << std::endl;
	book->setAddress(book->get());
	std::cout << "Enter your email" << std::endl;
	book->setEmail(book->get());
	std::cout << "Enter your phone number" << std::endl;
	book->setPhone(book->get());
	std::cout << "Enter your birthday" << std::endl;
	book->setBirthday(book->get());
	std::cout << "Enter your favorite meal" << std::endl;
	book->setMeal(book->get());
	std::cout << "Enter your underwear color" << std::endl;
	book->setUnderwear(book->get());
	std::cout << "Enter your darkest secret" << std::endl;
	book->setSecret(book->get());
	std::cout << "Contact info saved. Now you can choose an other option" << std::endl;
}

int	main(){
	Contact *book;
	std::string	str;
	int	i;
	
	i = 0;
	book = new Contact[8];
	std::cout << "What do you want to do: ADD , SEARCH or EXIT?" << std::endl;
	while(1)
	{
		getline(std::cin, str);
		if (str == "SEARCH")
			search(book, i);
		else if (str == "ADD")
			add_contacts(book, i++);		
		else if (str == "EXIT")
			break ;
		else
			std::cout << "You must write a correct order" << std::endl;
			
	}
	return (0);
}
