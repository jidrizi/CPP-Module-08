/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 12:01:29 by jidrizi           #+#    #+#             */
/*   Updated: 2025-10-01 12:01:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//constructors
Span::Span()
{
	std::cout << "Span default constructor called" << std::endl;
	(void) v;
	n = 0;
}

Span::Span(unsigned int _n) : n(_n)
{
	std::cout << "Span constructor with parameters called" << std::endl;
}

Span::Span(Span const &src) : n(src.n), v(src.v)
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span&	Span::operator=(Span const &src)
{
	std::cout << "Span copy assignment operator called" << std::endl;
	this->n = src.n;
	this->v = src.v;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}


//member functions

void	Span::addNumber(int value)
{
	if (this->v.size() >= this->n)
		throw (FullException());
	else
		this->v.push_back(value);
}

void Span::shortestSpan()
{
	
}


//excpetion class
const char* FullException::what() const throw()
{
	return ("Error: Span is full.\n");
}
const char* SpanException::what() const throw()
{
	return ("Error: Span distance couldn't be found.\n");
}
