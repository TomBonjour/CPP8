/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:15:50 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/24 18:24:09 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack & src);
    MutantStack &operator=(const MutantStack & src);
    
    typedef typename std::stack<T>::container_type::iterator          iterator;
    typedef typename std::stack<T>::container_type::const_iterator    const_iterator;
    
    iterator          begin();
    const_iterator    cbegin();
    iterator          end();
    const_iterator    cend();
};