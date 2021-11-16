#include "span.hpp"

span::span( unsigned int n ) : _n(n){
	return ;
}

span::~span( void ){
	return ;
}

span::span( const span& original ) : _n(original._n){
	*this = original;
	return ;
}

span& span::operator=( const span& original ){
	for ( std::vector<int>::const_iterator it = original._array.begin(); it < original._array.end(); it++ )
	{
		_array.push_back(*it);
	}
	return *this;
}

void span::addNumber( int nbr ){
	_array.shrink_to_fit();
	if ( _array.capacity() == _n )
		throw SpanIsFullException();
	_array.push_back(nbr);
}

void span::addNumber( unsigned int index, unsigned int end, int value ){
	while ( index <= end ){
		this->_array[index] = value;
		index++;
		if ( index > _n )
			throw SpanIsFullException();
	}
}

int	span::longestSpan( void ) {
	if ( _array.capacity() <= 1 )
		throw ToFewElementsException();
	sort(_array.begin(), _array.end());
	return (_array.back() - _array.front());
}

int	span::shortestSpan( void ){
	int ret;

	sort(_array.begin(), _array.end());
	if ( _array.capacity() <= 1 )
		throw ToFewElementsException();
	ret = this->longestSpan();
	for ( std::vector<int>::const_iterator it = _array.begin(); it < _array.end() - 1; it++ )
	{
		if ( ret > (*(it + 1)) - (*it) ){
			ret = (*(it + 1)) - (*it) ;
		}
	}
	return ret;
}

const char * span::SpanIsFullException::what () const throw (){
	return "Span is Full";
}

const char * span::ToFewElementsException::what () const throw (){
	return "To few elements to make span";
}
