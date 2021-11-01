#include "../includes/Contacts.hpp"

Contacts::Contacts( void ) : _index(0) {
	return ;
}

Contacts::~Contacts( void ) {
	return ;
}

int	Contacts::getIndex(void) {
	return (this->_index);
}

std::string Contacts::getFirstName(void) {
	return (this->_firstName);
}

std::string Contacts::getLastName(void){
	return (this->_lastName);
}

std::string Contacts::getNickName(void) {
	return (this->_nickName);
}

std::string Contacts::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string Contacts::getDarkestSecret(void) {
	return (this->_darkestSecret);
}

void Contacts::setIndex(int i) {
	this->_index= i;
}

void Contacts::setFirstName(void) {
	std::cout << "First Name: ";
	std::getline (std::cin, this->_firstName);
}

void Contacts::setLastName(void) {
	std::cout << "Last Name: ";
	std::getline (std::cin, this->_lastName);
}

void Contacts::setNickName(void) {
	std::cout << "Nick Name: ";
	std::getline (std::cin, this->_nickName);
}

void Contacts::setPhoneNumber(void) {
	std::cout << "Phone Number: ";
	std::getline (std::cin, this->_phoneNumber);
}

void Contacts::setDarkestSecret(void) {
	std::cout << "Darkest Secret: ";
	std::getline (std::cin, this->_darkestSecret);
}

