
#include "Intern.hpp"

int main(void){
	Bureaucrat bombaclat( "bombaclat", 1 );
	Intern willem;

	try {
		Form* permit = willem.makeForm("shrubbery request", "hans");
		bombaclat.signForm( *permit );
		bombaclat.executeForm( *permit );
		delete permit;
		permit = willem.makeForm("robotomy request", "hans");
		bombaclat.signForm( *permit );
		bombaclat.executeForm( *permit );
		delete permit;
		permit = willem.makeForm("presidential request", "hans");
		bombaclat.signForm( *permit );
		bombaclat.executeForm( *permit );
		delete permit;
		permit = willem.makeForm("robo request", "hans");
		bombaclat.signForm( *permit );
		bombaclat.executeForm( *permit );
		delete permit;
	} catch ( const Intern::WrongClassException& e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;

}
