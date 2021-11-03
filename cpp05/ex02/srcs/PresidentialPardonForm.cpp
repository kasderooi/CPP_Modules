#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm constructor called to target " << _target << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destructor called to target " << _target << std::endl;
	return ;
}

void PresidentialPardonForm::executeForm( void ) const{
	std::cout << _target << " has been pardoned by Zafod Beeblebbrox" << std::endl;
}
