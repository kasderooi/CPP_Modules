#ifndef TEMP_HPP
#define TEMP_HPP

#include <iostream>

template <typename T>
void iter( T* array, int len, void ( *f )( T const& ) ){
	if (!array)
		return;
	for (int i = 0; i < len; i++){
		(*f)(array[i]);
	}
}

template <typename T>
void print( T c ){
	std::cout << c;
	return;
}

#endif
