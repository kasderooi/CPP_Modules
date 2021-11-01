#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain Constructed" << std::endl;
	return ;
}

Brain::~Brain( void ){
	std::cout << "Brain Destructed" << std::endl;
	return ;
}

Brain::Brain( const Brain& original ){
	*this = original;
	return ;
}

Brain& Brain::operator=( const Brain& original ) {
	if (this != &original){
		for (int i = 0; i < 100; i++){
			if (!original.getBrain(i).empty())
				this->setBrain( original.getBrain(i), i);
		}
	}
	return *this;
}

void Brain::setBrain( std::string idea, int index ){
	this->_ideas[index].assign(idea);
}

std::string Brain::getBrain( int index )const{
	return this->_ideas[index];
}
