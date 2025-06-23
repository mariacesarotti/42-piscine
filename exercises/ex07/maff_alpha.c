#include <unistd.h>

int main()
{
    char i;

    i = 'Z';
    while (i > 'A')
    {
        i += 32;
        write(1, &i, 1);
        i -= 32;
        i--;
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);
    return (0);
}