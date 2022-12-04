/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:22:24 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/04 03:19:05 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

bool	isnumber(std::string str)
{
    int i;

    i = 0;
    if(str.empty())
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char const *argv[])
{
    if(argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return 1;
    }
    std::string arg(argv[1]);
    if (arg.size() == 1 && !std::isdigit(arg[0]))
        std::cout << "ojkm";
    else if ()
        
}
