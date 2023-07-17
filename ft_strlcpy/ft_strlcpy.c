unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (dest[i])
		i++;
    while (j <= size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (j + i);
}