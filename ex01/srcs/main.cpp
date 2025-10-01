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
int	main()
{
	Span	sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}


//this main is the one I made