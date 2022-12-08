/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:48:23 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 16:48:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <algorithm>

template <typename T> typename T::iterator easyfind(T arr, int a)
{
    typename T::iterator it;
    it =  std::find(arr.begin(), arr.end(), a);
    return it;
}

#endif