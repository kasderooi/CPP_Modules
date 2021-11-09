#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>

class NotFoundException : public std::exception {

	public:

	const char * what () const throw (){
		return "Instance not in container";
	}

};

template <typename T>
typename T::const_iterator easyfind( T &container, int instance ){
	typename T::const_iterator start = container.begin();
	typename T::const_iterator end = container.end();
	typename T::const_iterator found = std::find( start, end, instance );
	if ( found == end )
		throw NotFoundException();
	return found;
}

#endif
