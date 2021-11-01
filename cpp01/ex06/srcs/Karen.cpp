#include "../includes/Karen.hpp"

Karen::Karen( void ){
	return ;
}

Karen::~Karen( void ){
	return ;
}

void Karen::debug ( void ){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::info ( void ){
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void Karen::warning ( void ){
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error ( void ){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level ){
	const MemFuncPtr mfs[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	const std::string fnames[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	flag = 0;

	while (flag < 4 && level.compare(fnames[flag]))
		flag++;
	switch (flag){
		case 0 :
			std::cout << "[ " << fnames[0] << " ]" << std::endl;
			(this->*mfs[0])();
			std::cout << std::endl;
		case 1 :
			std::cout << "[ " << fnames[1] << " ]" << std::endl;
			(this->*mfs[1])();
			std::cout << std::endl;
		case 2 :
			std::cout << "[ " << fnames[2] << " ]" << std::endl;
			(this->*mfs[2])();
			std::cout << std::endl;
		case 3 :
			std::cout << "[ " << fnames[3] << " ]" << std::endl;
			(this->*mfs[3])();
			std::cout << std::endl;
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
