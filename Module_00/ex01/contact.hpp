/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:36:52 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/12 12:30:31 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>

class Contact
{
public:
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickName(std::string str);
	void	setLogin(std::string str);
	void	setAddress(std::string str);
	void	setEmail(std::string str);
	void	setPhone(std::string str);
	void	setBirthday(std::string str);
	void	setMeal(std::string str);
	void	setUnderwear(std::string str);
	void	setSecret(std::string str);
	
	std::string get();
	
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_meal;
	std::string	_underwear;
	std::string	_secret;
	
};

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}

void		Contact::setLastName(std::string str)
{
	_lastName = str;
}

void		Contact::setNickName(std::string str)
{
	_nickName = str;
}

void		Contact::setLogin(std::string str)
{
	_login = str;
}

void		Contact::setAddress(std::string str)
{
	_address = str;
}

void		Contact::setEmail(std::string str)
{
	_email = str;
}

void		Contact::setPhone(std::string str)
{
	_phone = str;
}

void		Contact::setBirthday(std::string str)
{
	_birthday = str;
}

void		Contact::setMeal(std::string str)
{
	_meal = str;
}

void		Contact::setUnderwear(std::string str)
{
	_underwear = str;
}

void		Contact::setSecret(std::string str)
{
	_secret = str;
}


std::string Contact::get()
{   
	std::string	str;
	getline(std::cin, str);                               
	return (str);
}


#endif
