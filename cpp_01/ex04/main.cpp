/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:01:20 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/26 03:17:58 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string filename, s1, s2;

    std::cout << "name of the file: ";
    std::getline(std::cin, filename);
    std::cout << "first string: ";
    std::getline(std::cin, s1);
    std::cout << "second string: ";
    std::getline(std::cin, s2);
    if(!std::freopen(filename.c_str(), "r", stdin))
        std::cerr << "error !\n";
    if(!std::freopen((filename + ".replace").c_str(), "w+", stdout))
        std::cerr << "error replacefile!\n";
    
}