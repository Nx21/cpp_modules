/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:48:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 05:16:52 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> arr(15);
    arr[5] = 10;
    std::cout << easyfind(arr, 10) << std::endl;
    // arr.find(11);
}