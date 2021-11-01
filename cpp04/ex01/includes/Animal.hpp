#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

	protected:

	std::string _type;

	public:

	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal& original );

	virtual Animal& operator=( const Animal& original );

	virtual void makeSound( void )const;
	std::string getType( void )const;

	virtual void setIdea( std::string idea, int index );
	virtual std::string getIdea( int index )const;

};

#endif
