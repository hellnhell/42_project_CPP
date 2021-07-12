/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:50:00 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 13:53:56 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(size_t   size) : _n(size)
{
}

Span::Span(Span const &s)
{
    *this = s;
}

Span::~Span()
{
}

Span    &Span::operator=(Span const &s)
{
    if (this != &s)
    {
        this->_n =  s._n;
        this->container = s.container;
    }
    return *this;
}

const char* Span::OneNumber::what() const throw()
{
    return "Numbers added are not enough.";
}

const char* Span::MaxSize::what() const throw()
{
    return "More numbers can't be added.";
}

void    Span::addNumber(int n)
{
    if(this->container.size() >= this->_n)
        throw   MaxSize();
    this->container.push_back(n);
}

int Span::shortestSpan() const
{
    int span = __INT_MAX__;
    int temp = __INT_MAX__;
    std::vector<int> vector(this->container.size());

    if (this->container.size() < 2)
        throw OneNumber();
    std::copy(this->container.begin(), this->container.end(), vector.begin());
    std::sort(vector.begin(), vector.end());

    for (size_t i = 0; i < (this->container.size() - 1); i++)
    {
        temp = vector[i + 1] - vector[i];
        if (temp < span)
            span = temp;
    }
    if (span == __INT_MAX__)
        throw OneNumber();
    return span;
}

int Span::longestSpan() const
{
    int span = 0;
    if (this->container.size() < 2)
        throw OneNumber();
    span = *std::max_element(this->container.begin(), this->container.end()) - 
            *std::min_element(this->container.begin(), this->container.end());
    return span;
}