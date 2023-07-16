char *ft_strcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>

int main()
{
    char dest[] = "salutjsqlCBJLBJDQ";
    char src[] = "bonjour";
    unsigned int n = 2;

    printf("%s", ft_strcpy(dest, src, n));
}