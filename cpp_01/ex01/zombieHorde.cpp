/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:34:26 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 01:48:15 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z;

    (void) name;
    z = new Zombie[N];
    for(int i = 0; i < N; i++)
        z[i].setname(name);
    return z;
}