#include "../includes/Replace.hpp"
#include <iostream>
#include <fstream>

Replace::Replace( std::string name, std::string str1, std::string str2) :
	_name(name), _str1(str1), _str2(str2) {
	this->_file.open(this->_name, std::ios::in);
	if (!this->_file.is_open())
	 	std::cout << "error in original\n";
	return ;
}

Replace::~Replace( void ){
	this->_file.close();
	return ;
}

Replace::Replace( const Replace& original) : _name(original._name), _str1(original._str1), _str2(original._str2){
	this->_name.append(".replace");
	this->_file.open(this->_name, std::ios::out);
	if (!this->_file.is_open())
	 	std::cout << "error in replace\n";
	return ;
}

std::string Replace::getContent( void ){
	std::string	line;
	
	std::getline( this->_file, line );
	return line;
}

std::string Replace::getNeedle( void ){
	return this->_str1;
}

void Replace::placeNeedle( void ){
	this->_file << this->_str2;
}

bool Replace::checkEof( void ){
	return this->_file.eof();
}

void	Replace::writeContent( std::string line ){
	this->_file << line;
}
