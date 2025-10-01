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
		return ;
	}
	else if(option == "SEARCH" || option == "2")
	{
		if (printSearch() == 1)
			printOptions();
	}
	else if(option == "EXIT" || option == "3")
		exitBook();
	else
	{
		std::cout << "\"" << option << "\"" << " is not a valid option!" << std::endl;
		system("sleep 1");
		system("clear");
		printOptions();
		return ;
	}
	return ;
}

int PhoneBook::printSearch()
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
		return (1);
	}
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getFirstName(), 10) << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getLastName(), 10) << "|";
		std::cout << std::right << std::setw(10) << fixInfo(_contacts[i].getNickname(), 10) << std::endl;
	}
	std::cout << std::endl;
	std::string info;
	std::cout << "Info for index: ";
	std::getline(std::cin, info);
	system("clear");
	if (info.empty() || !isValidNumber(info))
	{
		std::cout <<"Invalid input! Please enter a valid index" << std::endl;
		system("sleep 2");
		system("clear");
		return (1);
	}
	int index = std::atoi(info.c_str());
	if (index < 1 || index > _contactCount)
	{
		std::cout << "Index out of range! Please enter a number between 1 and " << _contactCount << std::endl;
		system("sleep 2");
		system("clear");
		return (1);
	}
	displayContactDetails(index -1);
	return (0);
}

void PhoneBook::displayContactDetails(int index)
{
	std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
	std::cout << "\nPress Enter to continue...";
	std::string dummy;
	std::getline(std::cin, dummy);
	system("clear");
	printOptions();
	return ;
}

std::string PhoneBook::fixInfo(const std::string& info, size_t w)
{
	if(info.length() <= w)
		return info;
	std::string fixed = info.substr(0, w - 1) + ".";
		return fixed;
}

bool PhoneBook::isValidNumber(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
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