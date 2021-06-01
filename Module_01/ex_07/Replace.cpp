/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:45:23 by emartin-          #+#    #+#             */
/*   Updated: 2021/05/31 10:36:34 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2) : _fileName(fileName), _s1(s1), _s2(s2)
{
	Replace::rFile();
}

Replace::~Replace()
{
}

int	Replace::check()
{
	if (this->_fileName.length() == 0)
	{
		std::cout << " Error: Empty Filename" << std::endl;
		return (1);
	}
	if (this->_s1.length() == 0)
	{
		std::cout << " Error: Empty Filename" << std::endl;
		return (1);
	}
	if (this->_s2.length() == 0)
	{
		std::cout << " Error: Empty Filename" << std::endl;
		return (1);
	}
	return (0);
}

std::string	Replace::rLine(std::string line)
{
	std::stringstream	s0;
	int					x;
	int					y;
	
	y = this->_s1.length();
	for (size_t i = 0; i < line.length(); i++)
	{
		x = 0;
		while(line[i + x] == this->_s1[x] && x < y)
			x++;
		if (x == y)
		{
			s0 << this->_s2;
			i += (x - 1);
		}
		else
			s0 << line[i];
	}
	return (s0.str());
}


void	Replace::rFile()
{
	std::ifstream	file;
	std::ofstream	op;
	std::string		line;
	
	if (!(Replace::check()))
	{			
		file.open(this->_fileName);
		if (file.fail())
		{
			std::cout << " Error: Couldn't open file. " << std::endl;
			return;
		}
		op.open(this->_fileName + ".replace");
		if (op.fail())
		{
			std::cout << " Error: Couldn't open replace-file. " << std::endl;
			return;
		}
		while (std::getline(file, line))
		{
			op << Replace::rLine(line);
			if (!file.eof())
					op << '\n';
		}
		file.close();
		op.close();
	}
}