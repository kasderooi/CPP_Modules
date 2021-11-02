#include "ShrubberyCreationForm.hpp"
#include <fstream>

std::string tree = "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\//  /douUP\n        \\\\////\n         |||/\\n         |||\\/\n         |||||\n   .....//||||\\....\n";

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm constructor called to target " << _target << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm destructor called with target " << _target << std::endl;
	return ;
}

void ShrubberyCreationForm::executeForm( void ) const{
	std::ofstream myfile;
	myfile.open (this->_target + "_shrubbery" );
	myfile << tree;
	myfile.close();
}

// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
// 	try{
// 		this->beSigned(executor);
// 		write_to_file( this->_target );
// 	} catch (const Form::GradeTooLowException& e ) {
// 		std::cout << "ShrubberyCreationForm cannot be signed because the worker's " << e.what() << std::endl;
// 	}
// }

