#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string.h>
# include <stdlib.h>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void printOptions();
		int	printSearch();
		void exitBook();
		std::string fixInfo(const std::string& info, size_t w);
		bool isValidNumber(const std::string& str);
		void displayContactDetails(int index);

	private:
		Contact _contacts[8];
		int _contactCount;
};

# endif