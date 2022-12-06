/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:03:40 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 22:18:10 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*> (raw);
}