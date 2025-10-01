#include "Contact.hpp"

void Contact::printAdd()
{
	system("clear");
	std::cout << " _____       __      " << std::endl;
	std::cout << "|_   _|     / _|       _ " << std::endl;
	std::cout << "  | | _ __ | |_ ___   (_)" << std::endl;
	std::cout << "  | || '_ \\|  _/ _ \\ " << std::endl;
	std::cout << " _| || | | | || (_) |  _ " << std::endl;
	std::cout << " \\___/_| |_|_| \\___/  (_)" << std::endl;
	std::cout << std::endl;
	addFirstName();
	addLastName();
	addNickname();
	addPhoneNumber();
	addDarkestSecret();
	system("clear");
}

void Contact::addFirstName()
{
	std::cout << "First Name: ";
	std::getline(std::cin, _firstName);
	if(_firstName.empty())
	{
		std::cout << "\033[1;31mField cannot be empty!\033[0m" << std::endl;
		addFirstName();
	}
	for (size_t i = 0; i < _firstName.length(); i++)
	{
		if(!isalpha(_firstName[i]))
		{
			std::cout << "\033[1;31mFirst Name is invalid!\033[0m" << std::endl;
			addFirstName();
		}
	}
	
}

void Contact::addLastName()
{
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);
	if(_lastName.empty())
	{
		std::cout << "\033[1;31mField cannot be empty!\033[0m" << std::endl;
		addLastName();
	}
	for (size_t i = 0; i < _lastName.length(); i++)
	{
		if(!isalpha(_lastName[i]))
		{
			std::cout << "\033[1;31mLast Name is invalid!\033[0m" << std::endl;
			addLastName();
		}
	}
}

void Contact::addNickname()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickname);
	if(_nickname.empty())
	{
		std::cout << "\033[1;31mField cannot be empty!\033[0m" << std::endl;
		addNickname();
	}
	for (size_t i = 0; i < _nickname.length(); i++)
	{
		if(isspace(_nickname[i]))
		{
			std::cout << "\033[1;31mNickname Name is invalid!\033[0m" << std::endl;
			addNickname();
		}
	}
}

void Contact::addPhoneNumber()
{
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);
	if(_phoneNumber.empty())
	{
		std::cout << "\033[1;31mField cannot be empty!\033[0m" << std::endl;
		addPhoneNumber();
	}
	if(_phoneNumber[0] != '+' && !std::isdigit(_phoneNumber[0]))
	{
		std::cout << "\033[1;31mInvalid Phone Number!\033[0m" << std::endl;
		addPhoneNumber();
	}
	for (size_t i = 1; i < _phoneNumber.length(); i++)
	{
		if(!isdigit(_phoneNumber[i]))
		{
			std::cout << "\033[1;31mInvalid Phone Number!\033[0m" << std::endl;
			addPhoneNumber();
		}
	}
	
}

void Contact::addDarkestSecret()
{
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkestSecret);
	if(_darkestSecret.empty())
		{
			std::cout << "\033[1;31mC'mOn YoU CaN TeLl mE :D\033[0m" << std::endl;
			addDarkestSecret();
		}
}

std::string Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}
