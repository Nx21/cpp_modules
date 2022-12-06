/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 01:05:47 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>


template <typename T> void iter(T arr[], size_t len, void (*f)(T))
{
    if (!arr || !f)
        return ;
    for (size_t i = 0; i < len; i++)
        (f)(arr[i]);
}

template <typename U> void testfonc(U a)
{
    std::cout << a << std::endl;   
}

#endif