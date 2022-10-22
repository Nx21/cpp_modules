/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:10:01 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 04:56:54 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phonebook;
    
    while (!std::cin.fail()) 
    {
        std::cout << "Enter ADD, SEARCH or EXIT: ";
        getline(std::cin, cmd);
        cmd = trim(cmd);
        if (std::cin.fail() || cmd == "EXIT")
            break;
        if (cmd == "SEARCH")
            phonebook.print_phonebook();
        else if (cmd == "ADD")
            phonebook.set_contact();
        else
            std::cout << "Try Again!!" << std::endl;
    }
    std::cout << "see you later\n";
}