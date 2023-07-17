char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if ((str[i - 1] == 32) || (str[i - 1] < 65 || str[i - 1] > 90 && str[i - 1] < 97 || str[i - 1] > 122))
		{
			
		}
	}
}

#include <stdio.h>

int main()
{
    char str[] = "salut, COMMENT 6D tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}
