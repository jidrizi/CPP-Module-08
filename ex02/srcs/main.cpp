/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-04 12:00:58 by jidrizi           #+#    #+#             */
/*   Updated: 2025-10-04 12:00:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Main was provided by subject pdf. The output should be same if we switch 
// mutant stack with for example std::list
//(of course we have to update them to their corresponding functions first)
int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// here is the same main but with a std::list to compare the results
// they should be the same
// int main()
// {
// 	std::list<int> mlist;

// 	mlist.push_back(5);
// 	mlist.push_back(17);

// 	std::cout << mlist.back() << std::endl;

// 	mlist.pop_back();

// 	std::cout << mlist.size() << std::endl;

// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	//[...]
// 	mlist.push_back(0);

// 	std::list<int>::iterator it = mlist.begin();
// 	std::list<int>::iterator ite = mlist.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	return 0;
// }


//another short main with bigger numbers idk what other test i could do since
// the main they gave us tests most of the stuff

// int main() 
// {
// 	MutantStack<int> m;
// 	m.push(5000000);
// 	m.push(6000000);
// 	m.push(4000000);

// 	MutantStack<int>::iterator it = m.begin();
// 	MutantStack<int>::iterator ite = m.end();

// 	while (it != ite)
// 	{
// 		std::cout << *it << " ";
// 		++it;
// 	}
// 	std::cout << std::endl;

// 	return 0;
// }