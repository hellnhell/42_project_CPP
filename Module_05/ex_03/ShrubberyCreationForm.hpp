/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:54:39 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 13:28:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCRATIONFORM_HPP
# define 	SHRUBBERYCRATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string			const _target;
	static std::string	const _tree;
	
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &s2);
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &s2);
	
	void execute(Bureaucrat const &bureaucrat) const;
};



#endif