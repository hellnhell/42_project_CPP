/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:00:12 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 11:00:13 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class   Array
{
    private:
        T   *_array;
        int _n;

    public:
        Array() : _array(NULL), _n(0) {};
        Array(unsigned int n) : _array(new T[n]), _n(n) {};
        Array(Array  &a2) : _n(a2.size())
        {
            this->_array = new T[this->_n];
            for (int i = 0; i < this->_n; i++)
                this->_array[i] = a2[i];
        };

        virtual ~Array()
        {
            if (this->_array)
                delete [] this->_array;
        };

        class OutOfLimits: public std::exception
        {
            public:
				const char	*what() const throw(){
                    return "Error: Out Of Limits Array";
                }
        };

        Array &operator=(Array &a2)
        {
            this->_n = a2.size();
            if (this->_array)
                delete [] this->_array; //ver si va llamando al destruc;
            this->_array = new T[this->_n];
            for (int i = 0; i < this->_n; i++)
                this->_array[i] = a2[i];
            return *this;
        };

        T     &operator[](int i) const
        {
            try
            {
                if (i < 0 || i >= this->_n)
                    throw OutOfLimits();
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
            return this->_array[i];
        };
        

        int size()
        {
            return this->_n;
        };
};

#endif