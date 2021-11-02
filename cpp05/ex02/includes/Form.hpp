#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

	std::string const	_name;
	bool				_signed;
	int const			_signGrade;
	int const			_execGrade;

	public:

	Form( std::string name, int signGrade, int execGrade );
	~Form( void );

	std::string getName( void ) const;
	int getSignGrade( void ) const;
	int getExecGrade( void ) const;
	bool getSigned( void ) const;
	void beSigned( Bureaucrat const& worker );
	void execute( Bureaucrat const & executor );
	virtual void executeForm( void ) const = 0;

	class GradeTooHighException : public std::exception {

		public :

		const char * what () const throw (){
			return "Grade is too high";
		}

	};

	class GradeTooLowException : public std::exception {

		public :

		const char * what () const throw (){
			return "Grade is too Low";
		}

	};

	class FormNotSignedException : public std::exception {

		public :

		const char * what () const throw (){
			return "Form is not signed";
		}

	};
};

std::ostream& operator<<( std::ostream& os, Form const& object);

#endif
