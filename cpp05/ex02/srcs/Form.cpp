#include "Form.hpp"

Form::Form( std::string name, int signGrade, int execGrade ) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade){
	std::cout << _name << "'s constructor called with signGrade " << _signGrade << " and execGrade " << _execGrade << std::endl;
	try {
		if ( _signGrade < 1){
			std::cout << "sign";
			throw GradeTooHighException();
		}
		if ( _execGrade < 1){
			std::cout << "exec";
			throw GradeTooHighException();
		}
		if ( _signGrade > 150){
			std::cout << "sign";
			throw GradeTooLowException();
		}
		if ( _execGrade > 150){
			std::cout << "exec";
			throw GradeTooLowException();
		}
	} catch ( const Form::GradeTooHighException& e ) {
		std::cout << e.what() << std::endl;
	} catch ( const Form::GradeTooLowException& e ) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

Form::~Form( void ){
	std::cout << _name << "'s deconstructor called with signGrade " << _signGrade << " and execGrade " << _execGrade << std::endl;
	return ;
}

std::string Form::getName( void ) const{
	return this->_name;
}

int Form::getSignGrade( void ) const{
	return this->_signGrade;
}

int Form::getExecGrade( void ) const{
	return this->_execGrade;
}

bool Form::getSigned( void ) const{
	return this->_signed;
}

std::ostream& operator<<( std::ostream& os, Form const& object){
	os << object.getName() << " has a sign grade of " << object.getSignGrade();
	os << " and a execute grade of " << object.getExecGrade();
	if ( object.getSigned()) {
		os << " and is signed";
	} else if ( !object.getSigned()) {
		os << " and is not signed";
	}
	return os;
}

void Form::beSigned( Bureaucrat const& worker ) {
	if ( worker.getGrade() > this->_signGrade ){
		throw GradeTooLowException();
	} else if ( this->_signed ) {
		throw FormAllreadySignedException();
	}
	this->_signed = true;
}

void Form::execute( Bureaucrat const & executor ) const{
	(void) executor;
	if ( !this->_signed ){
		throw FormNotSignedException();
	}
	if ( this->_execGrade < executor.getGrade() ){
		throw GradeTooLowException();
	}
	this->executeForm();
}

const char * Form::FormNotSignedException::what () const throw (){
	return "Form is not signed";
}

const char * Form::FormAllreadySignedException::what () const throw (){
	return "Form is allready signed";
}

const char * Form::GradeTooHighException::what () const throw (){
	return "Grade is too high";
}

const char * Form::GradeTooLowException::what () const throw (){
	return "Grade is too Low";
}

