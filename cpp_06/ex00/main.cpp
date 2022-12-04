/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:22:24 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/04 01:19:52 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int argc, char const *argv[])
{
    if(argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return 1;
    }
    std::string arg(argv[1]);
    if (arg.size() == 1 && !std::isdigit(arg[0])
        std::cout << "";
        
}
