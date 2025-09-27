/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 03:30:30 by jidrizi           #+#    #+#             */
/*   Updated: 2025/09/27 03:56:02 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "\033[32mTest begins\033[0m" << std::endl;
	std::vector<int>	vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	try
	{
		std::cout << *easyfind(vec, 8) << std::endl;
		std::cout << *easyfind(vec, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}