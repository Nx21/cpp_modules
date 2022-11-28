/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/27 05:45:23 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
        ClapTrap    a("heroA");
        ClapTrap    b("heroB");

        a.attack("heroB");
        b.takeDamage(0);
        b.beRepaired(0);
        b.attack("heroA");
        a.takeDamage(11);
        a.attack("b");
}