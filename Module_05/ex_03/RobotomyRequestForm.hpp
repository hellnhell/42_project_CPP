/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:55:09 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 16:19:17 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define 	ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string			const _target;
	static std::string	const _tree;
	
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &s2);
	~RobotomyRequestForm();
	
	RobotomyRequestForm &operator=(RobotomyRequestForm const &s2);
	
	void execute(Bureaucrat const &bureaucrat) const;
};

#endif