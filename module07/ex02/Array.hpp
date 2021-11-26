/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:02:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/26 15:18:30 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <cstddef>
# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T				*_array;

public:
	Array();
	~Array();
	Array( unsigned int n );
	Array( const Array &obj );
	Array& operator= ( const Array &obj );

	unsigned int size() const;
	T& operator[] ( const unsigned int index );

};

template <typename T>
Array<T>::Array() : _size(0), _array(nullptr)
{
	std::cout << "An Array constructor is called!" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
	std::cout << "An Array destructor is called!" << std::endl;
}

template <typename T>
Array<T>::Array( unsigned int n )
{
	this->_size = n;
	this->_array = new T[this->_size];

	std::cout << "An Array constructor of size " << this->size() << " is called!" << std::endl;
}

template <typename T>
Array<T>::Array( const Array &obj )
{
	this->_array = new T[obj.size()];
	for (unsigned int i = 0; i < obj.size(); i++)
		this->_array[i] = obj._array[i];
	this->_size = obj.size();
	std::cout << "The (deep) copy constructor for the class template Array is called!" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator= ( const Array &obj )
{
	this->_array = new T[obj.size()];
	for (unsigned int i = 0; i < obj.size(); i++)
		this->_array[i] = obj._array[i];
	this->_size = obj.size();
	return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
T& Array<T>::operator[] ( const unsigned int index )
{
	if (index >= this->_size)
		throw std::out_of_range("Out of bounds memory access is not allowed!");
	else
		return this->_array[index];
}

#endif