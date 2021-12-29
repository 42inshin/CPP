/* 예시
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
*/

#include <iostream>
#include <string>
/*
int	main(int argc, char **argv)
{
	int i;
	int	j;

	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
			else
				std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}
*/

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string str;
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (size_t j = 0; j < str.size(); j++)
			std::cout << static_cast<char>(toupper(str[j]));
	}
	std::cout << std::endl;
	return (0);
}
