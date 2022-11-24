/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:26:55 by nasreddine        #+#    #+#             */
/*   Updated: 2022/11/07 17:41:47 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP
# include <iostream>
class Harl
{
	private:
		typedef void (Harl::*method_function)(void);
		void	debug();
		void	info();
		void	warning();
		void	error();
		void	nothing();
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};
#endif