#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "RobotomyRequestForm constructor called to target " << _target << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	std::cout << "RobotomyRequestForm destructor called to target " << _target << std::endl;
	return ;
}

void RobotomyRequestForm::executeForm( void ) const{
	static int i = 0;

	if (i == 0){
		std::cout << "**---__˜˜Drilling noises˜˜__---** " << _target << " is robotomized" << std::endl;
		i++;
	} else if ( i == 1 ) {
		std::cout << "robotomizing failed..." << std::endl;
		i--;
	}
}
