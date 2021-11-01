#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

	private:

	Brain* _lobotomi;

	public:

	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat& original );

	Cat& operator=( const Cat& original );
	Animal& operator=( const Animal& original );
	void makeSound( void )const;
	
	void setIdea( std::string idea, int index );
	std::string getIdea( int index )const;

};

#endif
