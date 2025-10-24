/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:06:52 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/24 18:24:10 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
    
}
template <typename T>
MutantStack<T>::~MutantStack()
{
    
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack & src) 
{
    this->c = src.c;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack & src)
{
    if (*this != src)
        this->c = src.c;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin()
{
    return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::const_iterator    MutantStack<T>::cbegin()
{
    return (this->c.cbegin());
}
template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end()
{
    return (this->c.end());
    
}

template <typename T>
typename MutantStack<T>::const_iterator    MutantStack<T>::cend()
{
    return (this->c.cend());
}