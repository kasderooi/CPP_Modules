#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:

	std::string const _target;

	public:

	PresidentialPardonForm( std::string target );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( const PresidentialPardonForm& original );

	PresidentialPardonForm& operator=( const PresidentialPardonForm& original );

	std::string getTarget( void ) const;
	void executeForm( void ) const;

};

#endif
