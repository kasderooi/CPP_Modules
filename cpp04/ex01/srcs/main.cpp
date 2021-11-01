#include "Cat.hpp"
#include "Dog.hpp"

void function1( void ){
	std::cout << "\nDemonstarting deep Brain copy" << std::endl;
    Dog dog;
    dog.setIdea("Why do people think a straw has 2 holes?", 0);
    Dog copy(dog);
    std::cout << "\n     1 idea of dog: " << dog.getIdea(0) << std::endl;
    std::cout << "1 idea of dog copy: " << copy.getIdea(0) << std::endl;
    dog.setIdea("Why 2 holes?", 0);
	std::cout << "\n     2 idea of dog: " << dog.getIdea(0) << std::endl;
    std::cout << "2 idea of dog copy: " << copy.getIdea(0) << std::endl;
    std::cout << "\n\n " << std::endl;
}

void	function2( void ){
	std::cout << "\nDemonstarting deep Brain copy" << std::endl;
    Cat cat;
    cat.setIdea("Why do people think a straw has 2 holes?", 0);
    Cat copyc(cat);
    std::cout << "\n     1 idea of Cat: " << cat.getIdea(0) << std::endl;
    std::cout << "1 idea of Cat copy: " << copyc.getIdea(0) << std::endl;
    cat.setIdea("Why 2 holes?", 0);
	std::cout << "\n     2 idea of Cat: " << cat.getIdea(0) << std::endl;
    std::cout << "2 idea of Cat copy: " << copyc.getIdea(0) << std::endl;
    std::cout << "\n\n " << std::endl;
}

void	function3( void ){
	Animal* meta[10];

	for(int i = 0; i < 5; i++){
		meta[i] = new Dog();
	}
	for(int i = 5; i < 10; i++){
		meta[i] = new Cat();
	}
	meta[5]->setIdea( "this is a string", 0 );
	std::cout << meta[5]->getIdea(0) << std::endl;
	*(meta[6]) = *(meta[5]);
	std::cout << meta[6]->getIdea(0) << std::endl;
	meta[5]->setIdea( "nothing", 0 );
	std::cout << meta[5]->getIdea(0) << std::endl;
	std::cout << meta[6]->getIdea(0) << std::endl;
	for(int i = 0; i < 10; i++){
		delete meta[i];
	}
}

void	function4( void ){
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}

int main()
{
	function1();
	system("leaks Animal");
	function2();
	system("leaks Animal");
	function3();
	system("leaks Animal");
	function4();
	system("leaks Animal");
}
