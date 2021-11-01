#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain {

	private:

	std::string _ideas[100];

	public:

	Brain( void );
	~Brain( void );
	Brain( const Brain& original );

	Brain& operator=( const Brain& original );

	void setBrain( std::string idea, int index );
	std::string getBrain( int index )const;
};

#endif
