#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade){
	std::cout << this->_name << "'s constructor called with grade " << this->_grade << std::endl;
	try {
		if ( grade < 1 ) {
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
		else if ( grade > 150 ) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
	} catch ( const Bureaucrat::GradeTooHighException& e ) {
		std::cout << e.what() << std::endl;
	} catch ( const Bureaucrat::GradeTooLowException& e ) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << this->_name << "'s destructor called with grade " << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& original ) : _name(original.getName()), _grade(original.getGrade()){
	*this = original;
	std::cout << this->_name << "'s copyconstructor called with grade " << this->_grade << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& original ) {
	if (this != &original){
		_grade = original._grade;
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, Bureaucrat const& object ){
	os << object.getName() << ", bureaucrat with grade " << object.getGrade();
	return os;
}

std::string Bureaucrat::getName( void ) const{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const{
	return this->_grade;
}

void Bureaucrat::setGrade( int grade ){
	this->_grade = grade;
}

void Bureaucrat::incrementGrade( void ){
	std::cout << this->_name << "'s incremented with 1" << std::endl;
	this->_grade--;
	try {
		if (this->_grade < 1) {
			this->_grade++;
			throw Bureaucrat::GradeTooHighException();
		}
	} catch ( const Bureaucrat::GradeTooHighException& e ) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade( void ){
	std::cout << this->_name << "'s decremented with 1" << std::endl;
	this->_grade++;
	try {
		if (this->_grade > 150) {
			this->_grade--;
			throw Bureaucrat::GradeTooLowException();
		}
	} catch ( const Bureaucrat::GradeTooLowException& e ) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm( Form& form ) const{
	try {
		form.beSigned( *this );
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	} catch ( const Form::GradeTooLowException& e ) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because their grade is " << this->_grade << " and the form grade is " << form.getSignGrade() << std::endl;
	} catch ( const Form::FormAllreadySignedException& e ) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because the " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm( Form const & form ) {
	try {
		form.execute( *this );
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	} catch (const Form::FormNotSignedException& e) {
		std::cout << this->getName() << " can't execute the form because the " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException& e) {
		std::cout << this->getName() << " can't execute the form because their " << e.what() << std::endl;
	}
}

const char * Bureaucrat::GradeTooHighException::what () const throw (){
	return "Grade is too high";
}

const char * Bureaucrat::GradeTooLowException::what () const throw (){
	return "Grade is too Low";
}
