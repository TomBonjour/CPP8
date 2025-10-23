/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobourge <tobourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:00:38 by tobourge          #+#    #+#             */
/*   Updated: 2025/10/23 13:25:17 by tobourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{

	std::vector<int>    vector;
	std::deque<int>     deque;
	std::list<int>      list;

	for (int i = 1; i <= 10; i++)
		vector.push_back(i);

    for (int i = 10; i >= 0; i--)
		deque.push_back(i);

    for (int i = 0; i <= 10; i++)
    {
		list.push_back(i);
    }

	std::cout << "-------VECTOR TYPE-------" << std::endl;
	easyfind(vector, 2);
	easyfind(vector, 12);
    std::cout << std::endl << std::endl;

	std::cout << "-------DEQUE TYPE-------" << std::endl;
	easyfind(deque, 2);
	easyfind(deque, 12);
    std::cout << std::endl << std::endl;
    
	std::cout << "-------LIST TYPE-------" << std::endl;
	easyfind(list, 3);
	easyfind(list, 50);
	return 0;
}