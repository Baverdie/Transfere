#include <stdlib.h>

int	ft_len(int min, int max)
{
    int	r;

    r = max - min;
    return (r);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    
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

int main(int argc, char **argv)
{
    int i;
    int *tab;
    int min;
    int max;

    i = 0;
    min = ft_atoi(argv[1]);
    max = ft_atoi(argv[2]);
    ft_strjoin(&tab, min, max);
    while (i < max - min)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return (0);
}