#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for(int i = 0; i < 4; i++){
		this->_knowledge[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource( void ){
	return ;
}

MateriaSource::MateriaSource( const MateriaSource& original ){
	*this = original;
	return ;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& original ) {
	if (this != &original){
		for(int i = 0; i < 4; i++){
			this->_knowledge[i] = original._knowledge[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* thing ){
	for (int i = 0; i < 4; i++){
		if (this->_knowledge[i] == NULL){
			this->_knowledge[i] = thing;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type ){
	AMateria* result = NULL;
	for (int i = 3; i >= 0; i--){
		if (this->_knowledge[i] != NULL){
			if (!this->_knowledge[i]->getType().compare(type)){
				result = this->_knowledge[i]->clone();
				delete this->_knowledge[i];
				this->_knowledge[i] = NULL;
				break ;
			}
		}
	}
	return result;
}
