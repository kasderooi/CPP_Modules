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
	try {
		if ( worker.getGrade() > this->_signGrade ){
			throw GradeTooLowException();
		}
		this->_signed = true;
	} catch ( const Form::GradeTooLowException& e ) {
		std::cout << "ShrubberyCreationForm cannot be signed because the worker's " << e.what() << std::endl;
	}
	worker.signForm( *this );
}

void Form::execute( Bureaucrat const & executor ){
	(void) executor;
	try {
		if ( !this->_signed ){
			throw FormNotSignedException();
		}
		if ( this->_execGrade > executor.getGrade() ){
			throw GradeTooLowException();
		}
		this->executeForm();
	} catch ( const FormNotSignedException& e ) {
		std::cout << e.what() << std::endl;
		//throw;
	} catch ( const GradeTooLowException& e ) {
		throw;
	}
}
