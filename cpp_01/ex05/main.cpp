/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:50:39 by nasreddine        #+#    #+#             */
/*   Updated: 2022/11/27 01:51:10 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include "Harl.hpp"
int main(int argc, char const *argv[])
{
    Harl harl;
    for (int i = 1; i < argc; i++)
        harl.complain(argv[i]);
    return 0;
}
