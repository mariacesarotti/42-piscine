int    ft_isuppercase(char letter)
{
    return ((letter >= 'A' && letter <= 'Z'));
}

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if(argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (ft_isuppercase(argv[1][i]))
            {
                argv[1][i] += 32;
            }
            else
            {
                argv[1][i] -= 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}