#include "../includes/Zombie.hpp"

int main()
{
	Zombie		Bob = Zombie("Bob");
	Zombie*		Brad = newZombie("Brad");
	randomChump("Bill");
	delete Brad;
	return 0;
}
