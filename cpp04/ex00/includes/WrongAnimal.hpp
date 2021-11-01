#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

	protected:

	std::string _type;

	public:

	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( const WrongAnimal& original );

	WrongAnimal& operator=( const WrongAnimal& original );

	void makeSound( void )const;
	std::string getType( void )const;

};

#endif
