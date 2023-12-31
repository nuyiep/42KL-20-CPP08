/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:20:00 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 18:40:55 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP
#include "easyfind.hpp"

/* Must use algorithm: find() */
/* data.end() returns an iterator pointing beyond the last element */
/* if std::find does not find the target, it returns data.end() */
/* check if x is found */
/* std::distance- calculates the distance between 2 iterators */
/* 				- beginning iterator and found iterator */
/* [Typename] need because complier doesnt know what T::iterator is */
/* 			- it could be a function or static member */
/*			- T::iterator is a dependent name because it depends on */
/*			  the template parameter T */
/* https://stackoverflow.com/questions/1600936/officially-what-is-typename-for */
template<typename T>
int easyfind(T data, int x)
{
	typename T::iterator it1;
	
	it1 = std::find(data.begin(), data.end(), x);
	if (it1 != data.end()) //element is found
	{
		int pos = std::distance(data.begin(), it1);
		return (pos + 1);
	}
	else
		throw noOccurrenceIsFound();
}

/* Manual search using iterators - Not allowed by subject PDF */
// template<typename T>
// int easyfind(T data, int x)
// {
// 	std::list<int>::iterator it1;
// 	int	i = 1;
// 	for (it1 = data.begin(); it1 != data.end(); ++it1)
// 	{
// 		if (*it1 == x)
// 			return (i);
// 		i++;
// 	}
// 	throw noOccurrenceIsFound();
// }

#endif
