/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:32:59 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 11:18:40 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	columns(std::string str)
{	
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return(str);
}

void	info_contact(Contact *contacts, int i)
{
		std::cout << "First Name : " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last Name : " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname : " << contacts[i].getNickName() << std::endl;
		std::cout << "Login : " << contacts[i].getLogin() << std::endl;
		std::cout << "Address : " << contacts[i].getAddress() << std::endl;
		std::cout << "Email : " << contacts[i].getEmail() << std::endl;
		std::cout << "Phone Number : " << contacts[i].getPhone() << std::endl;
		std::cout << "Birthday : " << contacts[i].getBirthday() << std::endl;
		std::cout << "Favorite Meal : " << contacts[i].getMeal() << std::endl;
		std::cout << "Underware Color : " << contacts[i].getUnderwear() << std::endl;
		std::cout << "Darkest Secret : " << contacts[i].getSecret() << std::endl << std::endl;
}


void	search_contacts(Contact *contacts, int i)
{
	std::string index;

	if (i > 0)
	{
		std::cout << "------------------- YOUR PHONE BOOK -------------------" << std::endl;
		for (int count = 0; count < i; count++)
		{
			std::cout << "| " << std::setw(10) << count + 1;
			std::cout << " | " << std::setw(10) << columns(contacts[count].getFirstName());
			std::cout << " | " << std::setw(10) << columns(contacts[count].getLastName());
			std::cout << " | " << std::setw(10) << columns(contacts[count].getNickName());
			std::cout << " |" << std::endl;
		}
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << " - SELECT INDEX FOR COMPLETE INFO - " << std::endl;
		getline(std::cin, index);
		if (index[0] > '0' && std::isdigit(index[0]) && index.size() == 1)
			info_contact(contacts, stoi(index) - 1);
		else
			std::cout << " - Index doesn't exist. Try SEARCH again! -" << std::endl;
	}
	else
		std::cout << " - No contacts in your PhoneBook! -" << std::endl;	
}

void	add_contacts(Contact *contacts, int i)
{
	std::cout << "Enter your name : " << std::endl;
	contacts[i].setFirstName();
	std::cout << "Enter your last name : " << std::endl;
	contacts[i].setLastName();
	std::cout << "Enter your nickname : " << std::endl;
	contacts[i].setNickName();
	std::cout << "Enter your login : " << std::endl;
	contacts[i].setLogin();
	std::cout << "Enter your postal address : " << std::endl;
	contacts[i].setAddress();
	std::cout << "Enter your email : " << std::endl;
	contacts[i].setEmail();
	std::cout << "Enter your phone number : " << std::endl;
	contacts[i].setPhone();
	std::cout << "Enter your birthday : " << std::endl;
	contacts[i].setBirthday();
	std::cout << "Enter your favorite meal : " << std::endl;
	contacts[i].setMeal();
	std::cout << "Enter your underwear color : " << std::endl;
	contacts[i].setUnderwear();
	std::cout << "Enter your darkest secret : " << std::endl;
	contacts[i].setSecret();
	std::cout << " - CONTACT SAVED!! - " << std::endl << std::endl;
}

int	main(){
	Contact *contacts;
	std::string	str;
	int	i;
	
	i = 0;
	contacts = new Contact[8];
	std::cout << "---------------------------------" << std::endl;
	std::cout << "--------  PHONE BOOK  -----------" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	while(1)
	{
		std::cout << "      ADD ,SEARCH or EXIT!" << std::endl;
		std::cout << "---------------------------------" << std::endl << std::endl;
		getline(std::cin, str);
		std::cout << std::endl;
		if (str == "SEARCH")
			search_contacts(contacts, i);
		else if (str == "ADD")
		{
			if (i < 3)
			{
				std::cout << "    - NEW CONTACT -" << std::endl << std::endl;
				add_contacts(contacts, i++);
			}
			else
				std::cout << "  - YOU HAVE TOO MANY CONTACTS. YOU CAN ONLY SEARCH -"  << std::endl << std::endl;	
		}
		else if (str == "EXIT")
		{
			std::cout << "  - 👋 👋 👋 -"  << std::endl;	
			break ;
		}
		else
			std::cout << " - THIS ORDER DOESN'T EXIST. INTRODUCE A CORRECT ONE -" << std::endl << std::endl;	
	}
	return (0);
}
