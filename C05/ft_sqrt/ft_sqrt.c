int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i < nb && i * i <= 46340)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return 0;
}