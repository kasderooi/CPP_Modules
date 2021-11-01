#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructed" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ){
	std::cout << "WrongCat DeConstructed" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat& original ){
	*this = original;
	return ;
}

WrongCat& WrongCat::operator=( const WrongCat& original ) {
	if (this != &original){
		_type = original._type;
	}
	return *this;
}
