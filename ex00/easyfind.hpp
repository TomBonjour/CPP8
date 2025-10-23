/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:19:29 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/23 13:23:52 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <algorithm>

class   NoOccurrenceException : public std::exception
{
    virtual const char* what() const throw()
    {
        return ("Error : No occurrence of ");
    }
};   

template <typename T>
void    easyfind(T & cont, int n)
{
    typename T::const_iterator    it = std::find(cont.begin(), cont.end(), n);
    try
    {
        if (it == cont.end())
            throw NoOccurrenceException();
        std::cout << "First occurrence of " << *it << " found!" << std::endl;
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << n << std::endl;
    }
}