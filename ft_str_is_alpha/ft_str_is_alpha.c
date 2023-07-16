int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] < 97 && str[i] < 65) || (str[i] > 122 && str[i] > 90))
            return (1);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char str[] = "azertyuiopqsd\nfghjklmwxcvbn";
    printf("%d", ft_str_is_alpha(str));
}