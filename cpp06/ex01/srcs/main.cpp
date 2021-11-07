#include "Serialization.hpp"

int	main( void ){
	Data* hoi = new Data;
	uintptr_t a;
	Data* doei;

	hoi->stuff = "omg it worked";
	a = serialize(hoi);
	doei = deserialize(a);
	if ( hoi != doei ){
		std::cout << "something went wrong" << std::endl;
		return 1;
	}
	std::cout << doei->stuff << std::endl;
	delete hoi;
	return 0;
}
