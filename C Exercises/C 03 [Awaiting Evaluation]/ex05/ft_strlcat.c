unsigned int ft_str_length_fast(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dest_len;

    i = 0;
    j = 0;
    dest_len = ft_str_length_fast(dest);
    if (size <= dest_len)
        return (size + ft_str_length_fast(src));
    while (dest[i] != '\0' && i < size - 1)
        i++;
    while (src[j] != '\0' && j < size - dest_len - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + ft_str_length_fast(src));
}

#include <stdio.h>
#include <string.h>

int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 8), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 8), dest2);
}