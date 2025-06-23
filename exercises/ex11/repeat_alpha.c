
#include <unistd.h>

void repeat_alpha(int argc, char *str)
{
    int i;
    int multiplier;
    int j;

    j = 0;
    i = 0;
    multiplier = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            multiplier = str[i] - 96;
            while (j < multiplier)
            {
                write(1, &str[i], 1);
                j++;
            }
            j = 0;
            i++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            multiplier = str[i] - 64;
            while (j < multiplier)
            {
                write(1, &str[i], 1);
                j++;
            }
            j = 0;
            i++;
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char *str)
{
    str = "maria";
    repeat_alpha(argc, str);
    return (0);
}