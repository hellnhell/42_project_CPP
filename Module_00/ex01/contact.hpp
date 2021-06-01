/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:36:52 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/13 14:31:37 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
public:
	void	setFirstName();
	void	setLastName();
	void	setNickName();
	void	setLogin();
	void	setAddress();
	void	setEmail();
	void	setPhone();
	void	setBirthday();
	void	setMeal();
	void	setUnderwear();
	void	setSecret();
	
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getLogin();
	std::string getAddress();
	std::string getEmail();
	std::string getPhone();
	std::string getBirthday();
	std::string getMeal();
	std::string getUnderwear();
	std::string getSecret();

private:
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
#endif
