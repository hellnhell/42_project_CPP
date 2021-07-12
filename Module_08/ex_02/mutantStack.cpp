#include "mutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {};

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &m) : std::stack<T>(m) {};

template <typename T>
MutantStack<T>::~MutantStack() {};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &m)
{
    this->c = m.c;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::riterator    MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::riterator    MutantStack<T>::rend()
{
    return this->c.rend();
}