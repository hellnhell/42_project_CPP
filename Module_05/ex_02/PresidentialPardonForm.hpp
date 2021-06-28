/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:55:39 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/28 11:09:43 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRSODENTIALPARDONFORM_HPP
# define 	PRSODENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	std::string			const _target;
	
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &s2);
	virtual ~PresidentialPardonForm();
	
	PresidentialPardonForm &operator=(PresidentialPardonForm const &s2);
	
	void execute(Bureaucrat const &bureaucrat) const;
};

#endif