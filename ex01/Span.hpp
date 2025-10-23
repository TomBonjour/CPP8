/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:41 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/23 18:24:03 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span
{
    public:
    
        Span();
        Span(unsigned int N);
        Span(const Span & src);
        ~Span();

        Span    &operator=(const Span & src);

        void            addNumber(int number);
        unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

    class   FullContainerException : public std::exception
    {
        virtual const char* what() const throw();
    };

    class   NotEnoughNumbersException : public std::exception
    {
        virtual const char* what() const throw();
    };

    private:
    
    unsigned int        _n;
    std::vector<int>    _tab;

};


