/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:04:17 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/05 23:58:37 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>
#include "Classes.hpp"


void	identify(Base* p);
void	identify(Base& p);
Base	*generate(void);
#endif