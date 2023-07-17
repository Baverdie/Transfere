int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 65 || str[i] > 91)
            return (1);
        i++;
    }
    return (0);
}