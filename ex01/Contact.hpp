#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string.h>
# include <stdlib.h>
# include <cctype>

class Contact
{
	public:
		void printAdd();
		void addFirstName();
		void addLastName();
		void addNickname();
		void addPhoneNumber();
		void addDarkestSecret();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

};

# endif