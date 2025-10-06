/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-04 12:05:37 by jidrizi           #+#    #+#             */
/*   Updated: 2025-10-04 12:05:37 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack() {}
		MutantStack(const MutantStack &src) {*this = src;}
		MutantStack&	operator=(const MutantStack &src)
		{
			if (this != &src)
			{
				this->c = src.c;
			}
			return (*this);
		}
		~MutantStack() {}
	
	typedef typename std::stack<T>::container_type underlyingContainer;
	typedef typename underlyingContainer::iterator iterator;
	typedef typename underlyingContainer::const_iterator const_iterator;

	iterator		begin()
	{
		return (this->c.begin());
	}
	iterator		end()
	{
		return (this->c.end());
	}
	const_iterator	begin() const
	{
		return (this->c.begin());
	}
	const_iterator 	end()	const
	{
		return (this->c.end());
	}
};

#endif