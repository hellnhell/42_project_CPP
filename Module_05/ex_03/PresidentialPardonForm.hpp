/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:55:39 by emartin-          #+#    #+#             */
/*   Updated: 2021/06/24 17:15:24 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRSODENTIALPARDONFORM_HPP
# define 	PRSODENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string			const _target;
	static std::string	const _tree;
	
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &s2);
	~PresidentialPardonForm();
	
	PresidentialPardonForm &operator=(PresidentialPardonForm const &s2);
	
	void execute(Bureaucrat const &bureaucrat) const;
};

#endif