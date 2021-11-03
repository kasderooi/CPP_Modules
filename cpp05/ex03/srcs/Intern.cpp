#include "Intern.hpp"

Intern::Intern( void ){
	return ;
}

Intern::~Intern( void ){
	return ;
}

Intern::Intern( const Intern& original ){
	*this = original;
	return ;
}

Intern& Intern::operator=( const Intern& original ) {
	(void) original;
	return *this;
}

Form* Intern::makeForm( std::string name, std::string target ){
	std::string array[3] = { "shrubbery request", "robotomy request", "presidential request" };
	MemFuncPtr farray[3] = { &Intern::makeShrub, &Intern::makeRobo, &Intern::makePresi };
	
	for (int i = 0; i < 3; i++ ){
		if ( name.find( array[i] ) != std::string::npos )
			return (this->*farray[i])(target);
	}
	throw WrongClassException();
}

Form* Intern::makeShrub( std::string target ){
	return new ShrubberyCreationForm( target );
}

Form* Intern::makeRobo( std::string target ){
	return new RobotomyRequestForm( target );
}

Form* Intern::makePresi( std::string target ){
	return new PresidentialPardonForm( target );
}

const char * Intern::WrongClassException::what () const throw (){
	return "Wrong kind of template input";
}
