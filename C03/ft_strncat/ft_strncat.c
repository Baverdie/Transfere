char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

	i = 0;
	j = 0;
	while (dest[i])
	i++;
	while (src[j] && j <= nb)
	{
        dest[i + j] = src[j];
        j++;
	}
    if (j <= nb)
    {
	    dest[i + j] = '\0';
        j++;
    }else
        dest[i + j] = '\0';
	return (dest);
}