/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:08:16 by emartin-          #+#    #+#             */
/*   Updated: 2021/07/12 11:18:44 by emartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stdexcept>

template <typename T>
typename T::iterator    easyfind(T &container,const int &n)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), n);
    if (iter == container.end())
        throw (std::runtime_error("N is not in the container"));
    return iter;
}

#endif