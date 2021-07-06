#include "iter.hpp"

template <typename t>
void    add(t &var)
{
    var += 2;
}

int main()
{
    int     iarray[] = {0 , 1, 2, 3, 4, 5, 6};
    char    carray[] = {'w', 'x', 'i'};

    for (int i = 0; i < 7 ; i++)
        std::cout << iarray[i];
    std::cout << std::endl;

    iter(iarray, 7, add);
    
    for (int i = 0; i < 7; i++)
		std::cout << iarray[i];
	std::cout << std::endl;

    std::cout << "-------" << std::endl;

      for (int i = 0; i < 3 ; i++)
        std::cout << carray[i];
    std::cout << std::endl;

    iter(carray, 3, add);
    
    for (int i = 0; i < 3; i++)
		std::cout << carray[i];
	std::cout << std::endl;

    return 0;
}