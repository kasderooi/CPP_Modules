#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T, int n>
T& easyfind( T<n> container, int instance ){
	for ( int i = 0; container[i]; i++ )
		if ( container[i] == instance )
			return container[i];
	throw e
}

#endif
