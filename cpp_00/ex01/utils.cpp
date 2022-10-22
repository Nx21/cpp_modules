/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:40:02 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 04:46:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iomanip>
bool	isnumber(std::string str)
{
    int i;

    i = 0;
    if(str.empty())
        return (0);
    while(str[i])
    {
        if(!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void    print_string(std::string str, size_t n)
{
    if(str.size() <= n)
        std::cout << std::setw(n) << std::left << str;
    else
        std::cout << str.substr(0, n - 1) << ".";
}

std::string ltrim(std::string s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}
 
std::string rtrim(std::string s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}
 
std::string trim(std::string s) {
    return rtrim(ltrim(s));
}