/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:32:59 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/12 14:53:51 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "contact.hpp"

void	info_contact(Contact *contacts, int i)
{
		std::cout << contacts[i]._firstName  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._lastName  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._nickName  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._login  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._address  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._email  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._phone  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._birthday  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._meal  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._underwear  << " is your 1st contact" << std::endl;
		std::cout << contacts[i]._secret  << " is your 1st contact" << std::endl;
}

std::string	columns(std::string str)
{	
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return(str);
}

void	search_contacts(Contact *contacts, int i)
{
	std::string index;
	std::string n_contc;
	if (i > 0)
	{
		std::cout << "------------------- YOUR PHONE BOOK -------------------" << std::endl;
		for (int count = 0; count < i; count++)
		{
			std::cout << "| " << std::setw(10) << count + 1;
			std::cout << " | " << std::setw(10) << columns(contacts[count]._firstName);
			std::cout << " | " << std::setw(10) << columns(contacts[count]._lastName);
			std::cout << " | " << std::setw(10) << columns(contacts[count]._nickName);
			std::cout << " |" << std::endl;
		}
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << "Select de index for complete info" << std::endl;
		getline(std::cin, index);
		n_contc = std::to_string(i);
		if (index == n_contc)
			info_contact(contacts, (i + 1));
	}
	else
		std::cout << "No contacts in your PhoneBook. ADD new contacts" << std::endl;	
}

void	add_contacts(Contact *contacts, int i)
{
	std::cout << "Enter your name" << std::endl;
	contacts[i].setFirstName(contacts[i].get());
	std::cout << "Enter your last name" << std::endl;
	contacts[i].setLastName(contacts[i].get());
	std::cout << "Enter your nickname" << std::endl;
	contacts[i].setNickName(contacts[i].get());
	std::cout << "Enter yout login" << std::endl;
	contacts[i].setLogin(contacts[i].get());
	std::cout << "Enter your postal address" << std::endl;
	contacts[i].setAddress(contacts[i].get());
	std::cout << "Enter your email" << std::endl;
	contacts[i].setEmail(contacts[i].get());
	std::cout << "Enter your phone number" << std::endl;
	contacts[i].setPhone(contacts[i].get());
	std::cout << "Enter your birthday" << std::endl;
	contacts[i].setBirthday(contacts[i].get());
	std::cout << "Enter your favorite meal" << std::endl;
	contacts[i].setMeal(contacts[i].get());
	std::cout << "Enter your underwear color" << std::endl;
	contacts[i].setUnderwear(contacts[i].get());
	std::cout << "Enter your darkest secret" << std::endl;
	contacts[i].setSecret(contacts[i].get());
	std::cout << "Contact info saved. Now you can choose an other option" << std::endl;
}

int	main(){
	Contact *contacts;
	std::string	str;
	int	i;
	
	i = 0;
	contacts = new Contact[8];
	std::cout << "What do you want to do: ADD , SEARCH or EXIT?" << std::endl;
	while(1)
	{
		getline(std::cin, str);
		if (str == "SEARCH")
			search_contacts(contacts, i);
		else if (str == "ADD")
		{
			std::cout << "New Contact:" << std::endl;
			if (i <= 8)
				add_contacts(contacts, i++);
			else
				std::cout << "You have too many contacts in the list" << std::endl;	
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "You must write a correct order" << std::endl;
			
	}
	return (0);
}
