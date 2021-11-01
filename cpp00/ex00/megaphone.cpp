#include <iostream>

void UpperCase(char *argv)
{
	for (int i = 0; argv[i]; i++) {
		if (argv[i] >= 97 && argv[i] <= 122)
			argv[i] -= 32;
	}
}

int	main(int argc, char **argv) {
	std::string NoInput = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	switch (argc) {
		case 1:
			std::cout << NoInput;
			break;
		default:
			do {
				argv++;
				UpperCase(*argv);
				std::cout << *argv << " ";
			} while (*(argv + 1));
	}
	std::cout << std::endl;
	return 0;
}
