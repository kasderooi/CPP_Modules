#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750

void function1( void ){
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return;
}

void function2( void ){
	Array<int> nonumbers;
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	nonumbers = numbers;
	for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = 0;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != nonumbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return;
        }
    }
	nonumbers = numbers;
	numbers = nonumbers;
    delete [] mirror;//
    return;
}

int main(int, char**)
{
	function1();
	function2();
	system("leaks Array");
	return 0;
}
