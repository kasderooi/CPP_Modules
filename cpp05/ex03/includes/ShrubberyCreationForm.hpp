#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:

	std::string const _target;

	public:

	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm& original );

	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& original );

	std::string getTarget( void ) const;
	void executeForm( void ) const;

};

#endif
