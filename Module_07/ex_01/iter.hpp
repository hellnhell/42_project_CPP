#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <unistd.h>

template <typename Ttype>
void    iter(Ttype *a, size_t size, void (*function)(Ttype &))
{
    if (!a || size <= 0 || !function)
        return ;
    for (size_t i = 0; i < size; i++)
        function(a[i]);
}

#endif