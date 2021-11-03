#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	Bureaucrat bombaclat( "bombaclat", 0 );
	Bureaucrat stanislav( "stanislav", 151);
	ShrubberyCreationForm permit1( "bomba0" );
	ShrubberyCreationForm permit2( "stanis0" );
	RobotomyRequestForm permit3( "bomba1" );
	PresidentialPardonForm permit4( "bomba2" );

	bombaclat.executeForm( permit1 );
	stanislav.executeForm( permit2 );
	bombaclat.signForm( permit1 );
	bombaclat.signForm( permit1 );
	bombaclat.executeForm( permit1 );
	stanislav.signForm( permit2 );
	bombaclat.signForm( permit2 );
	stanislav.executeForm( permit2 );
	bombaclat.signForm( permit3 );
	bombaclat.executeForm( permit3 );
	bombaclat.executeForm( permit3 );
	bombaclat.executeForm( permit3 );
	bombaclat.executeForm( permit3 );
	bombaclat.signForm( permit4 );
	bombaclat.executeForm( permit4 );
	return 0;

}
