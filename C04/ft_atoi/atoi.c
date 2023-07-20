int ft_atoi(char *str)
{
    int		i;
	int		s;
	int		nb;

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

int	main(void)
{
	char	str[] = "--++--+1362345678923456789";

	printf("%d", ft_atoi(str));
	return (0);
}