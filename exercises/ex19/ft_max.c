// Write the following function:
//
// int		max(int* tab, unsigned int len);
//
// The first parameter is an array of int, the second is the number of elements in
// the array.
//
// The function returns the largest number found in the array.
//
// If the array is empty, the function returns 0.
// z

#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i = 0;
    int temp = 0;
    int size = len;
    if (!*tab)
        return (0);
    while (tab[i] < size)
    {
        if (temp < tab[i + 1])
        {
            temp = tab[i + 1];
            i++;
        }
        else
        {
            temp = tab[i];
        }
        while (temp > tab[i + 1] && tab[i + 1] != '\0')
        {
            i++;
        }
    }
    return (temp);
}

int main()
{
    int numbers[] = {4, 19, -3, 22, 7, 0};  
    printf("%d", max(numbers, 6));
    return (0);
}