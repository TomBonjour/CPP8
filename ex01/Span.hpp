/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:41 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/23 12:13:31 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span
{
    public:
    
        Span();
        Span(unsigned int N);
        ~Span();

        void    addNumber();

    private:
    
    unsigned int        _n;
    std::vector<int>    _tab;

};


