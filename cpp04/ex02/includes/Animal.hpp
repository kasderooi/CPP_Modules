#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

	protected:

	std::string _type;
	Animal( void );
	Animal( const Animal& original );

	public:

	virtual ~Animal( void ) = 0;

	virtual Animal& operator=( const Animal& original ) = 0;

	virtual void makeSound( void )const = 0;
	virtual std::string getType( void )const = 0;

	virtual void setIdea( std::string idea, int index ) = 0;
	virtual std::string getIdea( int index )const = 0;

};

#endif
