#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class   MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack<T> const &m);
        ~MutantStack();

        MutantStack &operator=(MutantStack<T> const &m);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin();
        iterator    end();

        typedef typename std::stack<T>::container_type::reverse_iterator riterator;
        riterator rbegin();
		riterator rend();  
};

#endif