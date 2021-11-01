#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& thing) : _name(name), _weapon(thing){
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ){
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
