#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <array>

template <typename T>
class Array {

	private:

	T*		_array;
	int	_size;

	public:

	Array( void ) : _array(NULL), _size(0){
		return ;
	};

	Array( unsigned int n ) : _array(new T[n]()), _size(n){
		return ;
	};

	~Array( void ){
		delete[] _array;
		return ;
	};

	Array( const Array& original ) : _array(NULL) {
		*this = original;
		return;
	};

	int	size( void ) const{
		return _size;
	}

	Array<T>& operator=( const Array<T>& original ){
		delete[] _array;
		_size = original.size();
		_array = new T[_size]();
		for ( int i = 0; i < _size; i++){
			_array[i] = original._array[i];
		}
		return *this;
	};

	T& operator[] ( int value ){
		if ( value >= this->size() || value < 0 )
			throw std::exception();
		return _array[value];
	}

};

#endif
