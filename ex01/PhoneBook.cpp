#include "PhoneBook.hpp"

void PhoneBook::printOptions()
{
	static int i;
	std::string option;

	std::cout << "1 - ADD" << std::endl;
	std::cout << "2 - SEARCH" << std::endl;
	std::cout << "3 - EXIT" << std::endl;
	std::cout << "Pick your poison: ";
	std::getline(std::cin, option);
	if(option == "ADD" || option == "1")
	{
		_contacts[i % 8].printAdd();
		if (_contactCount < 8)
			_contactCount++;
		i++;
		printOptions();
	}
	else if(option == "SEARCH" || option == "2")
		printSearch();
	else if(option == "EXIT" || option == "3")
		exitBook();
	else
		{
			std::cout << "\"" << option << "\"" << " is not a valid option!" << std::endl;
			system("sleep 1");
			system("clear");
			printOptions();
		}
}

void PhoneBook::printSearch()
{
	if (_contactCount < 1)
	{
		system("clear");
		std::cout << "Searching..." << std::endl;
		system("sleep 3");
		system("clear");
		std::cout << "No contacts found!" << std::endl;
		std::cout << "Redirecting, please wait..." << std::endl;
		system("sleep 2");
		system("clear");
		printOptions();
	}
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getFirstName(), 10) << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getLastName(), 10) << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getNickname(), 10) << std::endl;
	}
	std::cout << std::endl;
}

std::string PhoneBook::fixInfo(const std::string& info, size_t w)
{
	if(info.length() <= w)
		return info;
	std::string fixed = info.substr(0, w - 1) + ".";
		return fixed;
}

void PhoneBook::exitBook()
{
	system("timeout 2 curl parrot.live");
	system("clear");
	return;
}

PhoneBook::PhoneBook():_contactCount(0)
{

}