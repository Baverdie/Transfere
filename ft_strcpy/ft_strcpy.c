char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
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

    printf("%s", ft_strcpy(dest, src));
}