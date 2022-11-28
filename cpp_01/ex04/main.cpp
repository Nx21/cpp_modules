/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:01:20 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/26 23:11:31 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        if(argc < 4)
            std::cout << "Error! not enough argumment" << std::endl;
        else
            std::cout << "Error! few argumment" << std::endl;
        return 1;
    }
    std::string filename, s1, s2, str;
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
    {
        std::cerr << "Error!\n";
        return 1;
    }
    if(!std::freopen(filename.c_str(), "r", stdin))
    {
        std::cerr << "Error!\n";
        return 1;
    }
    if(!std::freopen((filename + ".replace").c_str(), "w+", stdout))
    {
        std::cerr << "Error!\n";
        return 1;
    }
    std::getline(std::cin, str, '\0');
    while (!str.empty())
    {
        size_t i = str.find(s1);
        if (i == std::string::npos)
        {
            std::cout << str;
            break;
        }
        std::cout << str.substr(0,i);
        std::cout << s2;
        str = str.substr(i + s1.length());
    }
}