int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    if (nb == 0)
        return 1;
    else if (nb < 0)
        return 0;
    while (i < nb)
    {
        nb *= i;
        i++;
    }
    return nb;
}