#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string guy){
	this->name = guy;
	announce();
	return ;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie " << this->name << " dies..." << std::endl;
	return ;
}

void Zombie::announce( void ){
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
