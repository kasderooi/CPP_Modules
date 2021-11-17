#include "span.hpp"

span::span( void ) {
	return ;
}

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
	_array.assign( original._array.begin(), original._array.end() );
	return *this;
}

span& span::operator=( std::vector<int>& original ){
	original.shrink_to_fit();
	_n = original.capacity();
	_array.assign( original.begin(), original.end() );
	return *this;
}

void span::addNumber( int nbr ){
	_array.shrink_to_fit();
	if ( _array.capacity() == _n )
		throw SpanIsFullException();
	_array.push_back(nbr);
}

void span::addNumber( std::vector<int>::const_iterator index, std::vector<int>::const_iterator end ){
	while (index < end - 1){
		_array.push_back(*index);
		index++;
		_array.shrink_to_fit();
		if ( _array.capacity() == _n )
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
