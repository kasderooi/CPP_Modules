#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm constructor called to target " << _target << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destructor called to target " << _target << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& original ) : Form("PresidentialPardonForm", 25, 5), _target(original.getTarget()){
	*this = original;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& original ) {
	(void) original;
	return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const{
	return this->_target;
}

void PresidentialPardonForm::executeForm( void ) const{
	std::cout << _target << " has been pardoned by Zafod Beeblebbrox" << std::endl;
}
