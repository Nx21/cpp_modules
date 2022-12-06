/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:48:23 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 05:17:32 by nhanafi          ###   ########.fr       */
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
    if (it == arr.end())
        return -1;
    return it;
}

#endif