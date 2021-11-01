#include "../includes/Phonebook.hpp"

int	desiredEntry(void)
{
	std::string	entry;

	while (1)
	{
		std::cout << "Please give index of desired entry between 1 and 8: ";
		std::cin >> entry;
		if (std::cin.eof()) {
			std::cin.clear();
			std::exit(1);
		}
		else if (entry.length() < 1 || entry.length() > 8)
			std::cout << "Not a valid entry\n";
		else if (entry[0] < '1' || entry[0] > '8')
			std::cout << "Not a valid entry\n";
		else
			break ;
	}
	return (entry[0] - '1');
}

int	main() {
	std::string input;
	std::string exit = "EXIT";
	std::string add = "ADD";
	std::string search = "SEARCH";
	Phonebook phonebook;
	int		i = 0;

	while (1) {
		std::cout << "-> ";
		std::cin >> input;

		if (std::cin.eof()) {
			std::cin.clear();
			return (1);
		}
		else if (!exit.compare(input))
			return (0);
		else if (!add.compare(input)) 
		{
			if (i > 7)
				i = 0;
			phonebook.addEntry(i);
			i++;
		}
		else if (!search.compare(input)) 
		{
			for (int j = 0; j < 8; j++)
				if (phonebook.getIndex(j) != 0)
					phonebook.searchEntry(j);
			phonebook.getEntry(desiredEntry());
		}
	}
	return (0);
}
