/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:49:34 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 18:02:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span():_size(0),_maxSize(0)
{
	_arr = NULL;
}

Span::Span(size_t const &N):_size(0),_maxSize(N)
{
	_arr = new int[N];
}

Span::Span(const Span & src):_size(src._size),_maxSize(src._maxSize)
{
	_arr = new int[_maxSize];
	for (size_t i = 0; i < this->_size; i++)
		this->_arr[i] = src._arr[i];
	
}

Span::~Span()
{
	delete[] _arr;
}

void	Span::addNumber(int const &a)
{
	if(_size == _maxSize)
		return ;
	_arr[_size] = a;
	_size++;
}

int	Span::shortestSpan()
{
	if(_size <= 1)
		return 0;
	std::sort(_arr,_arr+_size);
	int min = -1;
	for (size_t i = 0; i < _size - 1; i++)
	{
		if (_arr[i + 1] - _arr[i] < min || min < 0)
			min = _arr[i + 1] - _arr[i];
	}
	return min; 
}

int	Span::longestSpan()
{
	if(_size <= 1)
		return 0;
	std::sort(_arr,_arr+_size);
	return _arr[_size - 1] - _arr[0]; 
}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_size = rhs._size;
		this->_maxSize = rhs._maxSize;
		if (_arr)
			delete[] _arr;
		for (size_t i = 0; i < this->_size; i++)
			this->_arr[i] = rhs._arr[i];
	}
	return *this;
}

