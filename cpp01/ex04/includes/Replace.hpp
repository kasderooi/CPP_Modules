#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
#include <string>

class Replace {

	private:

	std::fstream _file;
	std::string _name;
	std::string _str1;
	std::string _str2;

	public:

	Replace( std::string name, std::string str1, std::string str2);
	~Replace( void );
	Replace( const Replace& original );
	std::string getContent( void );
	std::string getNeedle( void );
	void placeNeedle( void );
	bool checkEof( void );
	void writeContent( std::string line );
};

#endif
