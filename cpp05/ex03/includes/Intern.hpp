#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &original);

	Intern &operator=(const Intern &original);

	Form *makeForm(std::string name, std::string target);
	Form *makeShrub(std::string target);
	Form *makeRobo(std::string target);
	Form *makePresi(std::string target);

	typedef Form* (Intern::*MemFuncPtr)( std::string );

	class WrongClassException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
