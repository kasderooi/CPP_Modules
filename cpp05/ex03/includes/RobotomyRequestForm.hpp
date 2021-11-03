#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:

	std::string const _target;

	public:

	RobotomyRequestForm( std::string target );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm& original );

	RobotomyRequestForm& operator=( const RobotomyRequestForm& original );

	std::string getTarget( void ) const;
	void executeForm( void ) const;

};

#endif
