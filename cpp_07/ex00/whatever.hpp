/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 03:49:06 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>


template <typename T> T min(T a, T b)
{
    return a < b ? a : b;
}

template <typename T> T max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T> void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}


#endif