/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:14:15 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 00:10:04 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <cstdlib>

int main()
{
    srand(time(0));
    Base    *data = generate();;
    identify(data);
    identify(*data);
    delete data;
}
