int ft_conditions_uppercase(char str, char str_n)
{
    if (!((str_n >= 65 && str_n <= 90)
            || (str_n >= 97 && str_n <= 122)
            || (str_n >= 48 && str_n <= 57))
            && (str >= 97 && str <= 122))
        return (1);
    else
        return (0);
}

int ft_conditions_lowercase(char str, char str_n)
{
    if ((str_n >= 65 && str_n <= 90)
            || (str_n >= 97 && str_n <= 122)
            || (str_n >= 48 && str_n <= 57))
        return (1);
    else
        return (0);
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 1;
    if (str[0] >= 97 || str[0] <= 122)
    {
        str[0] -= 32;
    }
    while (str[i])
    {
        if (ft_conditions_uppercase(str[i], str[i - 1]) == 1)
            str[i] += 32;
        if (ft_conditions_lowercase(str[i], str[i - 1]) == 1)
            str[i] -= 32;
        i++;
    }
    return (str);
}

#include <stdio.h>

int main()
{
    char str[] = "salut, COMMENT 6D tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}