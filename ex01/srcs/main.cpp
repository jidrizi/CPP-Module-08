/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 11:43:04 by jidrizi           #+#    #+#             */
/*   Updated: 2025-10-01 11:43:04 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
//this main is provided by the subject
// int	main()
// {
// 	Span	sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }


//this main is the one I made
int main()
{
	try
	{
		Span	fullSpanTest = Span(2);
		fullSpanTest.addNumber(1);
		fullSpanTest.addNumber(2);
		fullSpanTest.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cerr <<  e.what() << std::endl;
	}

	try
	{
		Span	distanceTest = Span(1);
		distanceTest.addNumber(42);
		distanceTest.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr <<  e.what();
	}

	//subject said to test with atleast 10,000 numbers
	try
	{
		unsigned int		n = 10000;
		Span				sp = Span(n);
		std::vector<int>	lotsOfNumbers;

		lotsOfNumbers.reserve(n);
		for (unsigned int i = 0; i < n; ++i)
			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}