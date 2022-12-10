/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:48:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/08 04:20:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> arr(15);
    arr[5] = 10;
    try
    {
        std::cout << *easyfind(arr, 11) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}