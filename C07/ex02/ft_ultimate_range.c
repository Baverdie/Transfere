#include <stdlib.h>

int	ft_len(int min, int max)
{
	int	r;

	r = max - min;
	return (r);
}

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
    {
        *range = NULL;
        return (0);
    }
	else
    {
        *range = malloc((ft_len(min, max) + 1) * sizeof(int));
        if (*range == NULL)
            return (-1);
    }
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
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

#include <stdio.h>

int main(int argc, char **argv)
{
	int *range;
	int i;
	int min;
	int max;

	i = 0;
	(void)argc;
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	printf("ft_ultimate_range = %d\n", ft_ultimate_range(&range, min, max));
	while (i < ft_ultimate_range(&range, min, max))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}