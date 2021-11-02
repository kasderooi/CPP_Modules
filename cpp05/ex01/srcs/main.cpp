#include "Bureaucrat.hpp"

int main(void){
	Bureaucrat bombaclat( "bombaclat", 100 );
	Bureaucrat mommablat( "mommablat", 0);
	Bureaucrat stanislav( "stanislav", 151);
	Form permit1( "permit1", 99, 50 );
	Form permit2( "permit2", 99, 50 );
	Form permit3( "permit3", 99, 50 );

	bombaclat.incrementGrade();
	std::cout << bombaclat << std::endl;
	std::cout << mommablat << std::endl;
	std::cout << stanislav << std::endl;
	mommablat.incrementGrade();
	std::cout << mommablat << std::endl;
	stanislav.decrementGrade();
	std::cout << stanislav << std::endl;
	permit1.beSigned( bombaclat );
	permit2.beSigned( mommablat );
	permit3.beSigned( stanislav );
	std::cout << permit1 << std::endl;
	std::cout << permit2 << std::endl;
	std::cout << permit3 << std::endl;

	return 0;
}
