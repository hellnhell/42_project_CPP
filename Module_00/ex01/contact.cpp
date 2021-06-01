/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:40:41 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/14 11:19:47 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::setFirstName()
{
	std::string str;
	getline(std::cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		while(!(str[i] && str[i] >= 'a' && str[i] <= 'z'))
		{
			std::cout << " - NOT A VALID FORMAT. TRY AGAIN - " << std::endl;
			getline(std::cin, str);	
		}
		_firstName = str;
	}
}

void		Contact::setLastName()
{
	std::string str;
	getline(std::cin, str);	
	for(int i = 0; i < str.size(); i++)
	{
		while(!(str[i] && str[i] >= 'a' && str[i] <= 'z'))
		{
			std::cout << " - NOT A VALID FORMAT. TRY AGAIN - " << std::endl;
			getline(std::cin, str);	
		}
		_lastName = str;
	}
}

void		Contact::setNickName()
{
	std::string str;
	getline(std::cin, str);	
	_nickName = str;
}

void		Contact::setLogin()
{
	std::string str;
	getline(std::cin, str);	
	_login = str;
}

void		Contact::setAddress()
{
	std::string str;
	getline(std::cin, str);	
	_address = str;
}

void		Contact::setEmail()
{
	std::string str;
	getline(std::cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		while(!(str[i] && str.find('@') < str.size() && str.find(".com") < str.size()))
		{
			std::cout << " - NOT A VALID FORMAT. TRY AGAIN - " << std::endl;
			getline(std::cin, str);
		}
		_email = str;
	}
}

void		Contact::setPhone()
{
	std::string str;
	getline(std::cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		while(!(str[i] && std::isdigit(str[i])))
		{
			std::cout << " - NOT A VALID FORMAT. TRY AGAIN - " << std::endl;
			getline(std::cin, str);	
		}
		_phone = str;
	}
}

void		Contact::setBirthday()
{
	std::string str;
	getline(std::cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		while(!(str.length() == 8 && (str.find('/') < str[2] && str.find('/') < str[5])
		 		&& (std::isdigit(str[i]) || str[i] == '/')))
		{
			std::cout << " - NOT A VALID FORMAT. TRY AGAIN - " << std::endl;
			getline(std::cin, str);	
		}
		_birthday = str;
	}
}

void		Contact::setMeal()
{
	std::string str;
	getline(std::cin, str);	
	_meal = str;
}

void		Contact::setUnderwear()
{
	std::string str;
	getline(std::cin, str);	
	_underwear = str;
}

void		Contact::setSecret()
{
	std::string str;
	getline(std::cin, str);	
	_secret = str;
}

std::string Contact::getFirstName()
{
	                                  
	return (_firstName);
}

std::string Contact::getLastName()
{
	                                  
	return (_lastName);
}

std::string Contact::getNickName()
{                                  
	return (_nickName);
}

std::string Contact::getLogin()
{                                  
	return (_login);
}

std::string Contact::getAddress()
{                                  
	return (_address);
}

std::string Contact::getEmail()
{                                  
	return (_email);
}

std::string Contact::getPhone()
{                                  
	return (_phone);
}

std::string Contact::getBirthday()
{                                  
	return (_birthday);
}

std::string Contact::getMeal()
{                                  
	return (_meal);
}

std::string Contact::getUnderwear()
{                                  
	return (_underwear);
}

std::string Contact::getSecret()
{                                  
	return (_secret);
}
