/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:37 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/24 10:14:22 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : _n(0), _tab()
{
}

Span::~Span()
{
    _tab.clear();
}

Span::Span(unsigned int N) : _n(N)
{
    _tab.reserve(_n);
}

Span::Span(const Span & src) : _n(src._n), _tab(src._tab)
{
}

Span    &Span::operator=(const Span & src)
{
    if (this != &src)
    {
        this->_n = src. _n;
        this->_tab = src._tab;
    }
    return (*this);
}

void    Span::addNumber(int number)
{
    try
    {
        if (_tab.size() >= _n)
            throw FullContainerException();
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    _tab.push_back(number);
}

void    Span::addArray(std::vector<int> array)
{
    try 
    {
        if (_tab.size() + array.size() > _n)
            throw FullContainerException();
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
    {
        _tab.push_back(*it);
    }
}


unsigned int    Span::longestSpan() const
{
    int min = *(_tab.begin());
    int max = *(_tab.begin());

    try
    {
        if (_tab.size() <= 1)
            throw NotEnoughNumbersException();
        for(std::vector<int>::const_iterator it = _tab.begin(); it != _tab.end(); it++)
        {
            if (min > *it)
                min = *it;
            if (max < *it)
                max = *it;
        }
        unsigned int span = max - min;
        return (span);
    }
    catch(const std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return -1;
}

unsigned int    Span::shortestSpan() const
{
    unsigned int    span = *(_tab.begin()) - *(_tab.end());
    unsigned int    diff;
    
    try
    {
        if (_tab.size() <= 1)
            throw NotEnoughNumbersException();
        for(std::vector<int>::const_iterator it1 = _tab.begin() + 1; it1 != _tab.end(); it1++)
        {
            for(std::vector<int>::const_iterator it2 = it1 - 1; it2 != _tab.begin(); it2--)
            {
                diff = *it1 - *it2;
                if (span > diff)
                    span = diff;
            }
            for(std::vector<int>::const_iterator it2 = it1 + 1; it2 != _tab.end(); it2++)
            {
                diff = *it1 - *it2;
                if (span > diff)
                    span = diff;
            }
        }
        return span;
    }
    catch(const std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return -1;
}

const char* Span::FullContainerException::what() const throw()
{
    return ("Error : Container is full.");
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
    return ("Error : Not enough numbers in container to find a span.");
}




