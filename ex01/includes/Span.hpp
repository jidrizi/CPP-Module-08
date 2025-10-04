/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 11:43:40 by jidrizi           #+#    #+#             */
/*   Updated: 2025-10-01 11:43:40 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <limits>


class FullException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class SpanException : public std::exception
{
	public:
		virtual const char* what() const throw();
};


class Span
{
	private:
		std::vector<int>	v;
		unsigned int		n;
	
	public:
	//constructors
		Span();
		Span(unsigned int _n);
		Span(const Span& src);
		Span&	 operator=(const Span& src);
		~Span();
	
	//member functions
		void				addNumber(int value);
		int					shortestSpan();
		int					longestSpan();
		void				addMultipleNumbers(std::vector<int> lotsOf);
		void				printVector();

};

#endif