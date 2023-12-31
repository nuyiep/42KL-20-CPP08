/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:24:58 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 18:28:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <array>
#include <algorithm> //find
#include "color.hpp"

/* Exception class */
class noOccurrenceIsFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return (BOLD_RED "No occurence is found" RESET);
		}
};

#endif
