#include "../includes/Zombie.hpp"

Zombie::Zombie( void ) : _name("Zombie"){
	announce();
	return ;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie " << this->_name << " = out" << std::endl;
	return ;
}

void Zombie::nameZombie( std::string name ){
	this->_name = name;
}

void Zombie::announce( void ){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

