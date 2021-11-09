#include "span.hpp"

int count = 3;

int main ( void ){
	span container(count);

	try {
		for ( int i = 0; i <= count; i++ ) {
			container.addNumber( arc4random() % ( count * 10 ) );
		}
	} catch ( span::SpanIsFullException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container.longestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << container.shortestSpan() << std::endl;
	} catch ( span :: ToFewElementsException const& e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
