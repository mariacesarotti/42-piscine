int ft_is_alpha(char letter)
{
    return ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'));
}

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {

        while (argv[1][i] != '\0')
        {
            if (ft_is_alpha(argv[1][i]))
            {
                if ((argv[1][i] == 'z' || argv[1][i] == 'Z'))
                {
                    if (argv[1][i] = 'z')
                    {
                        argv[1][i] = 'a';
                    }
                    else
                    {
                        argv[1][i] = 'A';
                    }
                }
                else
                {
                    argv[1][i] += 1;
                }
                write(1, &argv[1][i], 1);
                i++;
            }
            else
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}