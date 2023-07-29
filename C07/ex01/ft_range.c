#include <stdlib.h>
#include <stdio.h>

int	ft_len(int min, int max)
{
	int	r;

	r = max - min;
	return (r);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	else
		tab = malloc((ft_len(min, max) + 1) * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
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

int main(int argc, char *argv[])
{
	int i;
	int *tab;

	i = 0;
	if (argc != 3)
		return (0);
	tab = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
	while (i < ft_len(ft_atoi(argv[1]), ft_atoi(argv[2])))
	{
		printf("%d\n", tab[i]);
		i++;
	}
}