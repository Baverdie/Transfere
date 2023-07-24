int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return 0;
    while (i < nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    int i;

    i = 2
    nb += 1;
    if (nb < 2)
        return 0;
    while (i < nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int i;
    int s;
    int nb;

    i = 0;
    s = 0;
    nb = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s++;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    if (s % 2 == 1)
        return (-nb);
    return (nb);
}

int main(int argc, char const *argv[])
{
    int i;

    i = 1;
    (void)argc;
    while (argv[i])
    {
        printf("%d\n", ft_find_next_prime(ft_atoi(argv[i])));
        i++;
    }
    return 0;
}