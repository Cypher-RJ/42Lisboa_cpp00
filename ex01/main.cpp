/* #include "Contact.hpp" */
#include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <string.h>
# include <stdlib.h>

int main()
{
	PhoneBook book;
	system("clear");
	std::cout << "Welcome to" << std::endl;
	std::cout << "My Awesome" << std::endl;
	std::cout << " ____  __ __   ___   ____     ___  ____    ___    ___   __  _ " << std::endl;
	std::cout << "|    \\|  |  | /   \\ |    \\   /  _]|    \\  /   \\  /   \\ |  |/ ]" << std::endl;
	std::cout << "|  o  )  |  ||     ||  _  | /  [_ |  o  )|     ||     ||  ' / " << std::endl;
	std::cout << "|   _/|  _  ||  O  ||  |  ||    _]|     ||  O  ||  O  ||    \\ " << std::endl;
	std::cout << "|  |  |  |  ||     ||  |  ||   [_ |  O  ||     ||     ||     \\" << std::endl;
	std::cout << "|  |  |  |  ||     ||  |  ||     ||     ||     ||     ||  .  |" << std::endl;
	std::cout << "|__|  |__|__| \\___/ |__|__||_____||_____| \\___/  \\___/ |__|\\_|" << std::endl;
	std::cout << std::endl;
	book.printOptions();
}