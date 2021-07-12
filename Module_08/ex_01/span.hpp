/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:49:47 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 13:49:21 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
private:
    Span();
    unsigned int     _n;
    std::vector<int> container;
    
public:
    Span(size_t size);
    Span(Span const &s);
    virtual ~Span();

    Span &operator=(Span const &s);
    
    class OneNumber: public std::exception{
        virtual const char *what() const throw();
    };

    class MaxSize: public std::exception{
        virtual const char *what() const throw();
    };
    
    void    addNumber(int n);

    template <typename T>
    void    addNumber(T begin, T end){
        if (distance(begin, end) + this->container.size() > this->_n)
            throw MaxSize();
        this->container.insert(this->container.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;
    
};

#endif