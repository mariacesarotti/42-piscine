int ft_is_alpha(char letter)
{
    return ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'));
}

int ft_is_numeric(char number)
{
    return ((number >= '0' && number <= '9'));
}

int ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (ft_is_alpha(str[i]))
        return (0);
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
        return (0);
    while (ft_is_numeric(str[i]))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result = (result * sign);
    return (result);
}

#include <stdio.h>

int main(void)
{
    // Test cases
    char *tests[] = {
        "42",
        "   123",
        "-56",
        "+78",
        "00123",
        "12abc34",
        "--+++---1234a",
        "abc",
        "",
        "2147483648",
        "-2147483648",
        NULL};

    int i = 0;
    while (tests[i] != NULL)
    {
        printf("Input: \"%s\" => Output: %d\n", tests[i], ft_atoi(tests[i]));
        i++;
    }
    return 0;
}
