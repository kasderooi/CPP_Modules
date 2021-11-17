#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <exception>
#include <algorithm>
#include <iostream>

class span {

	private:

	unsigned int		_n;
	std::vector<int>	_array;
	span( void );

	public:

	span( unsigned int n );
	~span( void );
	span( const span& original );

	span& operator=( const span& original );
	span& operator=( std::vector<int>& original );

	void addNumber( int nbr );
	void addNumber( std::vector<int>::const_iterator index, std::vector<int>::const_iterator end );
	int	longestSpan( void );
	int	shortestSpan( void );

	class SpanIsFullException : public std::exception {

		public:

		const char * what () const throw ();

	};

	class ToFewElementsException : public std::exception {

		public:

		const char * what () const throw ();

	};

};

#endif
