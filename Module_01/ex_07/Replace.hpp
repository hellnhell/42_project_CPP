/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:45:16 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/24 14:01:59 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

class Replace
{
private:
	void		rFile();
	int			check();
	std::string rLine(std::string line);
	std::string _fileName;
	std::string _s1;
	std::string _s2;
	
public:
	Replace(std::string fileName, std::string s1, std::string s2);
	~Replace();
};



#endif