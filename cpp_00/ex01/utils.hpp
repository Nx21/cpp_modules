/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:00:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 04:56:40 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP
# include <iostream>

const std::string WHITESPACE = " \n\r\t\f\v";
bool	isnumber(std::string str);
void    print_string(std::string str, size_t n);
std::string trim(std::string s);
#endif