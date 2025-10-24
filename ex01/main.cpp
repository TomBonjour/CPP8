/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:40:27 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/24 10:14:21 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main(void)
{
    std::srand(std::time(NULL));

    {
        std::cout << "-------SUBJECT TYPE | OVERLOAD CONSTRUCTOR -------" << std::endl;
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl << std::endl;
    }
    
    {
        std::cout << "------- DEFAULT CONSTRUCTOR | NOT ENOUGH EXCEPTIONS -------" << std::endl;
        Span sp = Span();
        
        sp.addNumber(1);
        std::cout << "Shortest Span --> " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span --> " << sp.longestSpan() << std::endl;
    }
    
    {
        std::cout << "------- RANDOM VALUES | COPY CONSTRUCTOR -------" << std::endl;
        Span sp1 = Span(10);
        int val;

        for (int i = 0; i < 10; i++)
        {
            val = rand() % 100;   
            sp1.addNumber(val);
            std::cout << "[0] : " << val << std::endl;
        }
        std::cout << std::endl;

        
        Span sp2 = Span(sp1);
        
        std::cout << "Shortest Span --> " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span --> " << sp2.longestSpan() << std::endl;
        std::cout << std::endl << std::endl;
    }

    {
        std::cout << "------- BIG TABLE | ASSIGNMENT OPERATOR -------" << std::endl;
        Span sp1 = Span(10000);
        Span sp2;

        for (int i = 0; i < 10000; i++)
        {
            sp1.addNumber(rand());
        }
        std::cout << std::endl;

        sp2 = sp1;
        
        std::cout << "Shortest Span --> " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span --> " << sp2.longestSpan() << std::endl;
        std::cout << std::endl << std::endl;
    }
    {
        std::cout << "------- NEGATIVE VALUES | FULL CONTAINER EXCEPTION -------" << std::endl;

        Span sp = Span(6);

        sp.addNumber(6);
        sp.addNumber(-3);
        sp.addNumber(17);
        sp.addNumber(-90);
        sp.addNumber(0);
        sp.addNumber(-1000);
        sp.addNumber(11); // Full Container Exception
        std::cout << std::endl;

        std::cout << "Shortest Span --> " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span --> " << sp.longestSpan() << std::endl;
        std::cout << std::endl << std::endl;
    }
    {
        std::cout << "------- ADD MULTIPLE NUMBERS -------" << std::endl;

        Span                sp = Span(5);
        std::vector<int>    array;

        array.push_back(1);
        array.push_back(2);
        array.push_back(3);
        array.push_back(4);
        array.push_back(5);

        sp.addArray(array);
        std::cout << "Longest Span --> " << sp.longestSpan() << std::endl;

        sp.addArray(array);
        std::cout << std::endl << std::endl;
    }
    return 0;
}