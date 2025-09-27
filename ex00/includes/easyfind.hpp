/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:27:07 by jidrizi           #+#    #+#             */
/*   Updated: 2025/09/27 03:56:18 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Error: Couldn't find the value that was searched for.");
		}
};

template <typename T>
typename T::iterator	easyfind(T	&container, int valueToFind)
{
	typename T::iterator	found;

	found = std::find(container.begin(), container.end(), valueToFind);
	if (found == container.end())
		throw (NotFoundException());
	return (found);
}

#endif