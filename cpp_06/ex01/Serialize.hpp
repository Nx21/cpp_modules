/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:04:17 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 22:23:11 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

typedef struct s_data
{
	int			first;
	int second;
	int		third;
}	Data;
uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);
#endif