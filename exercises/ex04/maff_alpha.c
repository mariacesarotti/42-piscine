#include <unistd.h>

int main()
{
    char    i;

    i = 'A';
    while(i < 'Z')
    {
        i += 32;
        write(1, &i, 1);
        i++;
        i -= 32;
        write(1, &i, 1);
        i++;
    }
return (0);
}
