#include "Bureaucrat.hpp"

int main(void){
	Bureaucrat bombaclat( "bombaclat", 100 );
	Bureaucrat mommablat( "mommablat", 0);
	Bureaucrat stanislav( "stanislav", 151);

	bombaclat.incrementGrade();
	std::cout << bombaclat << std::endl;
	std::cout << mommablat << std::endl;
	std::cout << stanislav << std::endl;
	mommablat.incrementGrade();
	std::cout << mommablat << std::endl;
	stanislav.decrementGrade();
	std::cout << stanislav << std::endl;
	return 0;
}
