#include <unistd.h>

void    ft_print_numbers()
{
    char    i;

    i = '9';
    while (i >= '0')
    {
        write(1, &i, 1);
        i--;
    }
}

int main()
{
    ft_print_numbers();
    return (0);
}