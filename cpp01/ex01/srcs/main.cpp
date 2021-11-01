#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int			n = 5;
	Zombie*		horde = zombieHorde(n, "willem");

	for(int i = 0; i < n; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
