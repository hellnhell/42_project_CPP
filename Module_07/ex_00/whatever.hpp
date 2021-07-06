#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template <typename Ttype>
void    swap(Ttype &a, Ttype &b)
{
    Ttype tmp = b;
    b = a;
    a = tmp;
}

template <typename Ttype>
const Ttype &min(Ttype const &a, Ttype const &b)
{
    return (a < b ? a : b);
}

template <typename Ttype>
const Ttype &max(Ttype const &a, Ttype const &b)
{
    return (a > b ? a : b);
}

#endif