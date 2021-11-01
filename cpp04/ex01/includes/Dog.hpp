#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	
	private:

	Brain* _lobotomi;

	public:

	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog& original );

	Dog& operator=( const Dog& original );
	Animal& operator=( const Animal& original );
	void makeSound( void )const;

	void setIdea( std::string idea, int index );
	std::string getIdea( int index )const;
};

#endif
