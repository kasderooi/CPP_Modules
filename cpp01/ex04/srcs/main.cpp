#include "../includes/Replace.hpp"

int	main( int argc, char **argv ){
	if (argc != 4){
		std::cout << "Input must be 1 filename and 2 str's!" << std::endl;
		return 1;
	}
	Replace original(argv[1], argv[2], argv[3]);
	Replace copy = original;
	std::string line = original.getContent();
	std::size_t found;

	while ( !original.checkEof() || line.length()) {
		do {
			found = line.find(original.getNeedle());
			if (found == std::string::npos){
				copy.writeContent(line);
				if (!original.checkEof())
					copy.writeContent("\n");
				line = original.getContent();
			} else {
				copy.writeContent(line.substr(0, found));
				line = line.substr(found + copy.getNeedle().length());
			}
		} while ( !original.checkEof() && found == std::string::npos );
		if (found != std::string::npos)
			copy.placeNeedle();
	}
	return 0;
}
