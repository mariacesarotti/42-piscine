#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int size = 0;
    int index;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        size = (i - 1);
        i = 0;
        while (i <= size)
        {
            index = (size - i);
            write(1, &argv[1][index], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}