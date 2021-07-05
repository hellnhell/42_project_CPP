/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:13:33 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/05 12:51:18 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstring>

struct Data {
	std::string s1;
	int			rnum;
	std::string	s2;
};

void	*serialize(void)
{
	char 		*serialized = new char[20];
	std::string	alnum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	
	for (int i = 0; i < 8; i++)
	{
		serialized[i] = alnum[rand() % alnum.length()];
		serialized[i + 12] = alnum[rand() % alnum.length()];
	}
	int	n = rand();
	memcpy(serialized + 8, &n, sizeof(int));
	return serialized;
}

Data *deserialize(void *raw)
{
	Data *strc = new  (Data);
	strc->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	strc->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
	strc->rnum = *(static_cast<int*>(raw) + 8);
	return strc;	
}


int	 main()
{
	srand(time(NULL));
	
	void *serialized = serialize();
	Data *data = deserialize(serialized);
	std::cout << "s1 --- " << data->s1 << std::endl;
	std::cout << "rnum --- " << data->rnum << std::endl; 
	std::cout << "s2 --- " << data->s2 << std::endl; 

	delete static_cast<char*>(serialized);
	delete data;

	return 0;
	
}