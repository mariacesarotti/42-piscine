// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.
// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
// The output will be followed by a newline.
// If the number of arguments is not 1, the program displays a newline.
// Example:
// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $

#include <unistd.h>

int ft_isuppercase(char letter)
{
	return ((letter >= 'A' && letter <= 'Z'));
}

int ft_is_alpha(char letter)
{
	return ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'));
}

int main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_is_alpha(argv[1][i]))
			{
				if (ft_isuppercase(argv[1][i]))
				{
					sum = argv[1][i] + 13;
					if (sum > 90)
					{
						sum -= 90;
						argv[1][i] = 65 + (sum - 1);
					}
					else
					{
						argv[1][i] += 13;
					}
				}
				else
				{
					sum = argv[1][i] + 13;
					if (sum > 122)
					{
						sum -= 122;
						argv[1][i] = 97 + (sum - 1);
					}
					else
					{
						argv[1][i] += 13;
					}
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}