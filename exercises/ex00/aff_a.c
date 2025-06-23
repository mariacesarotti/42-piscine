#include <unistd.h>

int	main(int	argc, char  **str)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
		return (0);
	}
	while(str[1][i])
	{
		if(str[1][i] == 'a')
		{
			write(1, "a", 1);
			return (0);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}