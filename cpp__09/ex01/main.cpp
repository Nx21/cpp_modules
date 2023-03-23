/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:00:34 by nhanafi           #+#    #+#             */
/*   Updated: 2023/03/14 15:02:52 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return 0; 
    }
    std::string str(argv[1]);
    rpn(str);
    
    return 0;
}
