/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 02:21:52 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 04:08:00 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
template <class T> Array<T>::Array()
{
	_size = 0;
	arr = NULL;
}

template <class T> Array<T>::Array(size_t const &n)
{
	this->_size = n;
	this->arr = new int[this->_size];
}

template <class T> Array<T>::Array(const Array & src)
{
	this->_size = src._size;
    this->arr = new T[this->_size];
    for (size_t i = 0; i < this->_size; i++)
    {
        this->arr[i] = src.arr[i];
    }
}


template <class T> Array<T>::~Array()
{
	if (arr)
		delete arr;
}

template <class T> Array<T> &Array<T>::operator=( Array const & rhs )
{
	if ( this != &rhs )
	{
		this->_size = rhs._size;
		if (arr)
			delete arr;
		this->arr = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
		{
			this->arr[i] = rhs.arr[i];
		}
	}
	return *this;
}

template <class T> T &Array<T>::operator[](size_t const &i)
{
    if (i >= _size || i < 0)
        throw std::bad_alloc();
    return this->arr[i];
}
