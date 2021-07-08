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

class   Awesome {
    public:
        Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int get( void ) const {return this->_n;};
    private:
        int _n;
};

std::ostream &operator<<(std::ostream &os, Awesome const &a) {os << a.get(); return os;}



#endif