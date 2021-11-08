#ifndef TEMP_HPP
#define TEMP_HPP

#include <iostream>

template <typename T, typename F>
void iter( T* array, size_t len, F f ){
	if (!array)
		return;
	for (size_t i = 0; i < len; i++){
		array[i] = f(array[i]);
	}
}

template <typename T>
void print( T* array, size_t len ){
	for (size_t i = 0; i < len; i++){
		std::cout << array[i];
	}
}

#endif
