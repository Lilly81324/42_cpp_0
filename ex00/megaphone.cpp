#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return((char)(c + ('A' - 'a')));
	else
		return (c);
}

void	ft_iterate(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << ft_toupper(argv[i][j]);
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_iterate(argc, argv);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
