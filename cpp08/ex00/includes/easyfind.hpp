#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>

template <typename T>
T& easyfind( T container, int instance ){
	
	for( typename T::iterator it = container.begin(); it < container.end(); it++ ){
		if ( (*it) == instance )
			return (*it);
	}
	return NULL;
}

template <typename T>
std::ostream & operator<<( std::ostream & o, T const & element ){
	o << (*element);
	return o;
}

#endif
