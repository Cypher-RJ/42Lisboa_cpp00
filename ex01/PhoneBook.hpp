#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string.h>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook
{
	public:
		void printOptions();
		void printSearch();
		void exitBook();

	private:
		Contact contacts[8];
};

# endif