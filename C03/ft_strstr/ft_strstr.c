char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *r;

    i = 0;
    j = 0;
    r = "";
    if (!to_find[j])
        return (str);
    while (str[i])
    {
        while (str[i] == to_find[j] )
        {
            if (!to_find[j])
            {
                while (str[i])
                {
                    r[j] = str[i];
                    i++;
                    j++;
                }
                r[j] = '\0';
                return r;
            }
            r[j] = str[i];
            i++;
            j++;
        }
        i++;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char str[] = "azertyuiop";
    char to_find[] = "azerty";

    printf("%s", ft_strstr(str, to_find));
}