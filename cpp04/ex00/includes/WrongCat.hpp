#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	private:

	

	public:

	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat& original );

	WrongCat& operator=( const WrongCat& original );

};

#endif
