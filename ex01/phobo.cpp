#include "phobo.hpp"

class Contact
{
	public:
	bool	used;
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	number;
	std::string	secret;
	Contact()
	{
		used = false;
		fname = "";
		lname = "";	
		nname = "";
		number = "";
		secret = "";
	}
};

class PhoneBook
{
	private:
	Contact list[BOOKSIZE];
	int		last;
	public:
	PhoneBook()
	{
		last = BOOKSIZE - 1;
	}
	void ft_add();
	void ft_search();
};

std::string	ft_get_input(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::getline(std::cin, input);
	while (input.length() <= 0)
		std::getline(std::cin, input);
	return (input);
}

int	ft_get_intput(std::string msg)
{
	std::string	input;
	int index;

	std::cout << msg;
	while (1)
	{
		std::getline(std::cin, input);
		while (input.length() <= 0)
			std::getline(std::cin, input);
		if (input.length() != 1)
			std::cout << "Input invalid!" << std::endl << msg;
		else if (std::isdigit(input[0]) == 0)
			std::cout << "Input invalid!" << std::endl << msg;
		else
		{
			index = std::atoi(input.c_str());
			if (index > BOOKSIZE - 1 || index < 0)
				std::cout << "Index out of range" << std::endl << msg;
			else
				break;
		}
	}
	return (index);
}

void	PhoneBook::ft_add()
{
	last++;
	if (last >= BOOKSIZE)
		last = 0;
	std::cout << "Setting position " << last << "\n";
	list[last].used = true;
	list[last].fname = ft_get_input("First Name:     ");
	list[last].lname = ft_get_input("Last Name:      ");
	list[last].nname = ft_get_input("Nickname:       ");
	list[last].number = ft_get_input("Number:         ");
	list[last].secret = ft_get_input("Darkest Secret: ");
}

std::string	ft_shorten(std::string content)
{
	if (content.length() > COLUMNWIDTH)
		return (content.substr(0, 9) + ".");
	return (content);
}

std::string	ft_itos(int x)
{
	switch (x % 10)
	{
		case 0:
			return "0";
		case 1:
			return "1";
		case 2:
			return "2";
		case 3:
			return "3";
		case 4:
			return "4";
		case 5:
			return "5";
		case 6:
			return "6";
		case 7:
			return "7";
		case 8:
			return "8";
		case 9:
			return "9";
	}
	return ("0");
}

void	PhoneBook::ft_search()
{
	int	index;

	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "|----------";
	std::cout << "|" << std::endl;
	for (int i = 0; i < BOOKSIZE; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << ft_shorten(list[i].fname);
		std::cout << "|" << std::setw(10) << ft_shorten(list[i].lname);
		std::cout << "|" << std::setw(10) << ft_shorten(list[i].nname);
		std::cout << "|" << std::endl;
	}
	index = ft_get_intput("Index of the contact: ");
	std::cout << "First Name:|" << list[index].fname << std::endl;
	std::cout << "Last Name: |" << list[index].lname << std::endl;
	std::cout << "Nickname:  |" << list[index].nname << std::endl;
	std::cout << "Number:    |" << list[index].number << std::endl;
	std::cout << "Secret:    |" << list[index].secret << std::endl;
}

int main(void)
{
	PhoneBook phobo;
	std::string	input;

	while(1)
	{
		input = ft_get_input("Please give a command: ");
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			phobo.ft_add();
		else if (input == "SEARCH")
			phobo.ft_search();
		else
			std::cout << std::endl;
	}
	return (0);
}
