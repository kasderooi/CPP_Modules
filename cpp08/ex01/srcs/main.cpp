#include "span.hpp"

int count = 10000;

int main ( void ){
	span container1(count);
	span container2(count);

	try {
		for ( int i = 0; i <= (count / 2); i++ ) {
			container1.addNumber( arc4random() % ( count * 10 ) );
		}
	} catch ( span::SpanIsFullException const& e ) {
		std::cout << e.what() << std::endl;
	}
	container2 = container1;
	try {
		container2.addNumber( (count / 2), count - 1, 1000000 );
	} catch ( span::SpanIsFullException const& e ) {
		std::cout << e.what() << std::endl;
	}
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
