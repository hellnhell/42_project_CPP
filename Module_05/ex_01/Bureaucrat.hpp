/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:50:19 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 12:11:26 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
	Bureaucrat();
	std::string const _name;
	int	_grade;
	
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &b2);
	~Bureaucrat();
	
	Bureaucrat &operator=(Bureaucrat const &b2);
	
	std::string	getName() const;
	int			getGrade() const;
	
	void	addGrade();
	void	subGrade();
	void	signForm(Form &form) const;
	
	class	GradeTooHighException: public std::exception{
		virtual const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception{
		virtual const char *what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b2);

#endif