int	ft_recursive_factorial(int nb)
{
    int i;

    i = nb;
    if (i == 0)
        return 1;
    else if (i < 0)
        return 0;
    return (nb * ft_recursive_factorial(nb - 1));
}