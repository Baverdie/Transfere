#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    int size;
    int i;
    char *r;

    size = 0;
    i = 0;
    while (src[i])
        i++;
    size = i;
    i = 0;
    r = malloc((size + 1) * sizeof(char));
    while (src[i])
    {
        r[i] = src[i];
        i++;
    }
    return (&*r);
}

int main()
{
    char str[] = "Bonjour";
    printf("%s", ft_strdup(str));
}
