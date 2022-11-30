/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:21:06 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 02:59:45 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
        ClapTrap    a("heroA");
        ClapTrap    b("heroB");

        a.info();
        b.info();
        a.attack("heroB");
        b.takeDamage(0);
        b.beRepaired(0);
        a.info();
        b.info();
        b.attack("heroA");
        a.takeDamage(11);
        a.attack("b");
        a.info();
        b.info();
}