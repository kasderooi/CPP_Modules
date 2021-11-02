#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {

	private:

	std::string const	_name;
	int					_grade;

	public:

	Bureaucrat( std::string name, int grade );
	~Bureaucrat( void );
	Bureaucrat( const Bureaucrat& original );

	Bureaucrat& operator=( const Bureaucrat& original );

	std::string getName( void ) const;
	int getGrade( void ) const;
	void setGrade( int grade );
	void incrementGrade( void );
	void decrementGrade( void );
	void signForm( Form const& form ) const;
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
		
		public:

		const char * what () const throw () {
			return "grade too high";
		}
	};

	class GradeTooLowException : public std::exception {
		
		public:

		const char * what () const throw () {
			return "grade too low";
		}
	};

};

std::ostream& operator<<( std::ostream& os, Bureaucrat const& object );

#endif
