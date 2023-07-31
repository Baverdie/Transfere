#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	while (*strs[i])
		i++;
	tab = malloc((size + (ft_len(sep) * i) + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (*strs[i])
	{
		while (strs[i][j])
		{
			tab[j] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j])
		{
			tab[j] = sep[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (&*tab);
}