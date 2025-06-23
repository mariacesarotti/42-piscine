#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int size = ft_strlen(src);
    char *mypointer = malloc(size * sizeof(char));
    int i = 0;

    while (src[i] != '\0')
    {
        mypointer[i] = src[i];
        i++;
    }
    return (mypointer);
}

int main()
{
    char *strum = "maria";
    ft_strdup(strum);
    printf("%s", strum);
    return (0);
}