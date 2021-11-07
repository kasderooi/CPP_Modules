#include "Serialization.hpp"

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<intptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
