#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal {

	public:

	Dog( void );
	~Dog( void );
	Dog( const Dog& original );

	Dog& operator=( const Dog& original );
	void makeSound( void )const;
};

#endif
