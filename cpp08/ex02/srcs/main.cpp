#include "MutantStack.hpp"
#include <list>
#include <algorithm>

void functionMutant( void ){
	MutantStack<int> mstack;
	std::list<int> lstack;

	std::cout << "Initially, mstack.empty(): " << mstack.empty() << std::endl;
	std::cout << "Initially, lstack.empty(): " << lstack.empty() << std::endl;

	mstack.push(5);
	lstack.push_back(5);

	std::cout << "now, mstack.empty(): " << mstack.empty() << std::endl;
	std::cout << "now, lstack.empty(): " << lstack.empty() << std::endl;

	mstack.push(17);
	lstack.push_back(17);

	std::cout << mstack.top() << " ";
	std::cout << lstack.back() << std::endl;

	mstack.pop();
	lstack.pop_back();

	std::cout << mstack.size() << " ";
	std::cout << lstack.size() << std::endl;

	mstack.push(3);
	lstack.push_back(3);
	mstack.push(5);
	lstack.push_back(5);
	mstack.push(737);
	lstack.push_back(737);
	mstack.push(0);
	lstack.push_back(0);

	MutantStack<int>::iterator itm = mstack.begin();
	std::list<int>::iterator itl = lstack.begin();
	MutantStack<int>::iterator item = mstack.end();
	std::list<int>::iterator itel = lstack.end();
	++itm;
	--itm;
	++itl;
	--itl;
	while (itm != item || itl != itel)
	{
		std::cout << *itm << " " << *itl << std::endl;
		++itm;
		++itl;
	}

	std::stack<int> mstack_copy(mstack);
	std::list<int> lstack_copy(lstack);

	mstack_copy.pop();
	lstack_copy.pop_back();

	std::cout << mstack_copy.top() << " ";
	std::cout << lstack_copy.back() << std::endl;
}

int main()
{
	functionMutant();
	return 0;
}
