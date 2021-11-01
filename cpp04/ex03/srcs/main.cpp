#include "CIce.hpp"
#include "CCure.hpp"
#include "CCharacter.hpp"
#include "MateriaSource.hpp"

void function1( void ){
	ICharacter* tony = new CCharacter( "tony" );
	ICharacter* willem = new CCharacter( "willem" );
	AMateria* bolt1 = new CIce();
	AMateria* bolt2 = new CIce();
	AMateria* heal1 = new CCure();

	tony->equip(bolt1);
	tony->equip(bolt2);
	willem->equip(heal1);
	tony->use(0, *willem);
	tony->use(1, *willem);
	willem->use(0, *willem);
	delete tony;
	delete willem;
}

void function2( void ){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new CIce());
	src->learnMateria(new CCure());
	ICharacter* me = new CCharacter("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new CCharacter("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void function3( void ){
	ICharacter* tony = new CCharacter( "tony" );
	AMateria* bolt1 = new CIce();
	AMateria* bolt2 = new CIce();

	tony->equip(bolt1);
	tony->equip(bolt2);
	ICharacter* willem = new CCharacter( *(CCharacter*)tony );
	tony->use(0, *willem);
	willem->use(0, *tony);
	willem->use(0, *tony);
	willem->use(5, *tony);
	delete tony;
	delete willem;
}

int	main(){
	function1();
	function2();
	function3();
	system("leaks Iface");
}
