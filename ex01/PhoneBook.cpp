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
	if(option == "ADD" || option == "1"){
		contacts[i].printAdd(); i++;}
	else if(option == "SEARCH" || option == "2")
		printSearch();
	else if(option == "EXIT" || option == "3")
		exitBook();
	else
		std::cout << option << " is not a valid option!" << std::endl;
}