#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){
	Bureaucrat bombaclat( "bombaclat", 100 );
	Bureaucrat stanislav( "stanislav", 151);
	ShrubberyCreationForm permit1( "bomba" );
	ShrubberyCreationForm permit2( "stanis" );

	permit1.execute( bombaclat );
	permit2.execute( stanislav );
	return 0;
}
