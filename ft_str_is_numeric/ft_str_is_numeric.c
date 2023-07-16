int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            return (1);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char str[] = "1234567890";
    printf("%d", ft_str_is_numeric(str));
}