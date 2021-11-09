#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>
#include <deque>

template <class T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>{

	public:

	MutantStack( void );
	~MutantStack( void );
	MutantStack( const MutantStack& original );

	MutantStack& operator=( const MutantStack& original );

	typedef typename std::stack<T, container>::container_type::iterator iterator;

	iterator begin( void ) {
		return ( this->c.begin() );
	};

	iterator end( void ) {
		return ( this->c.end()) ;
	};

};

template <class T, class Container>
MutantStack<T, Container>::MutantStack( void ) : std::stack<T, Container>() {
	return;
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack( void ) {
	return;
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack( MutantStack const & original ) : std::stack<T, Container>( original ) {
	return ;
}

template <class T, class Container>
MutantStack<T, Container> &    MutantStack<T, Container>::operator=( MutantStack const &original ) {
	if ( this != &original )
		std::stack<T, Container>::operator=( original );
	return( *this );
}

#endif
