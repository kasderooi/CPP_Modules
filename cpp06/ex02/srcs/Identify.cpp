#include "Identify.hpp"

Base::~Base( void ){
	return ;
}

Base* generate( void ){
	int i = rand() % 3;

	switch (i){
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify( Base* p ){
	if (A* a = dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
	} else if (B* b = dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
	} else if (C* c = dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;
	}
}

void identify( Base& p ){
	int i[3] = {1,1,1};
	char c[3] = {'A','B','C'};
	try {
		A& a = dynamic_cast<A&>(p);
		(void) a;
	} catch ( ... ) {
		i[0] = 0;
	}
	try {
		B& b = dynamic_cast<B&>(p);
		(void) b;
	} catch ( ... ) {
		i[1] = 0;
	}
	try {
		C& c = dynamic_cast<C&>(p);
		(void) c;
	} catch ( ... ) {
		i[2] = 0;
	}
	for (int j = 0; j < 3; j++){
		if (i[j])
			std::cout << c[j] << std::endl;
	}
}
