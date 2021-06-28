/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:05:35 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/28 11:09:21 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	Form();
	std::string const _name;
	bool		_signd;
	int			const _gradeSign;
	int			const _gradeExec;



	
public:
	Form(std::string const &name, int const gradeSign, int const gradeExec);
	Form(Form const &f2);
	virtual ~Form();
	
	Form &operator=(Form const &f2);
	
	std::string	getName() const;
	int			getGradeSign() const;
	int			getGradeExec() const;
	bool		getSigned() const;


	void	beSigned(Bureaucrat const &b);

	virtual void execute(Bureaucrat const & executor) const = 0;
	
		class	GradeTooHighException: public std::exception{
		virtual const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception{
		virtual const char *what() const throw();
	};
	class	AlreadySigned: public std::exception{
		virtual const char *what() const throw();
	};
	class notSigned: public std::exception{
		virtual const char *what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &os, Form const &f2);

#endif