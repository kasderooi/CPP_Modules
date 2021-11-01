#include "../includes/Phonebook.hpp"

Phonebook::Phonebook( void ) {
	return ;
}

Phonebook::~Phonebook( void ) {
	return ;
}

int		Phonebook::getIndex(int i) {
	return this->contacts[i].getIndex();
}

void	Phonebook::addEntry(int i) {
	this->contacts[i].setIndex(i + 1);
	std::cin.ignore();
	this->contacts[i].setFirstName();
	this->contacts[i].setLastName();
	this->contacts[i].setNickName();
	this->contacts[i].setPhoneNumber();
	this->contacts[i].setDarkestSecret();
}

void	Phonebook::searchEntry(int i)
{
	std::cout << std::right << i + 1 << "|";
	if (this->contacts[i].getFirstName().length() <= 10)
		std::cout << std::setw(10) << std::right << this->contacts[i].getFirstName() << "|";
	else
		std::cout << std::setw(9) << this->contacts[i].getFirstName().substr(0, 9) << "." << "|";
	if (this->contacts[i].getLastName().length() <= 10)
		std::cout << std::setw(10) << std::right << this->contacts[i].getLastName() << "|";
	else
		std::cout << std::setw(9) << this->contacts[i].getLastName().substr(0, 9) << "." << "|";
	if (this->contacts[i].getNickName().length() <= 10)
		std::cout << std::setw(10) << std::right << this->contacts[i].getNickName() << std::endl;
	else
		std::cout << std::setw(9) << this->contacts[i].getNickName().substr(0, 9) << "." << std::endl;
}

void	Phonebook::getEntry(int i)
{
	if (getIndex(i) == 0)
	{
		std::cout << "empty entry" << std::endl;
		return ;
	}
	std::cout << this->contacts[i].getIndex() << std::endl;
	std::cout << this->contacts[i].getFirstName() << std::endl;
	std::cout << this->contacts[i].getLastName() << std::endl;
	std::cout << this->contacts[i].getNickName() << std::endl;
	std::cout << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << this->contacts[i].getDarkestSecret() << std::endl;
}
