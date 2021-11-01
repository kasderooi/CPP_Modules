#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal {

	public:

	Cat( void );
	~Cat( void );
	Cat( const Cat& original );

	Cat& operator=( const Cat& original );
	void makeSound( void )const;
};

#endif
