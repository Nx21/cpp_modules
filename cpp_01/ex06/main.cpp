/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:50:39 by nasreddine        #+#    #+#             */
/*   Updated: 2022/11/25 04:30:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char const *argv[])
{
    Harl harl;
    if (argc > 1)
        harl.complain(argv[1]);
    return 0;
}

