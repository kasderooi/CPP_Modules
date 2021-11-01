#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../includes/Contacts.hpp"

class Phonebook {

	private:

	Contacts contacts[8];

	public:

	Phonebook(void);
	~Phonebook(void);

	int getIndex(int i);
	void addEntry(int i);
	void searchEntry(int i);
	void getEntry(int i);

};

#endif
