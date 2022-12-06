/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:14:15 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 22:26:11 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <cstdlib>

void printdata(Data *data)
{
    std::cout << data->first << " ";
    std::cout << data->second << " ";
    std::cout << data->third << std::endl;
}
uintptr_t foo()
{
    Data    *p;
    
    p = new Data;
    p->first = rand();
    p->second = rand();
    p->third = rand();
    printdata(p);
    return serialize(p);
}


int main()
{
    Data    *data;
    
    srand(time(0));
    data = deserialize(foo());
    printdata(data);
    delete data;
    data = deserialize(foo());
    printdata(data);
    delete data;
    return 0;
}
