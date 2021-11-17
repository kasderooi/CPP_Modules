#include "span.hpp"

int count = 10000;

int main ( void ){
	std::vector<int> values;
	std::vector<int> values2;
	span container1(count);
	span container2(count);

	for ( int i = 0; i <= count; i++ ) {
		values.push_back( arc4random() % ( count * 10 ) );
	}
	for ( int i = 0; i < count; i++ ) {
		values2.push_back( 0 );
	}
	try {
		container1.addNumber( values.begin(), values.end() );
	} catch ( span::SpanIsFullException const& e ) {
		std::cout << e.what() << std::endl;
	}
	container2 = container1;
	try {
		std::cout << container1.longestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container1.shortestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container2.longestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container2.shortestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	container2 = values2;
	try {
		std::cout << container1.longestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container1.shortestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container2.longestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container2.shortestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
