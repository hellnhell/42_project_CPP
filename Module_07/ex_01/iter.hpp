#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <unistd.h>

template <typename Ttype>
void    iter(Ttype *a, size_t size, void (*function)(Ttype const &))
{
    if (!a || size <= 0 || !function)
        return ;
    for (size_t i = 0; i < size; i++)
        function(a[i]);
}

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();return o; }



#endif