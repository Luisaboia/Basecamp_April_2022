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

// Tests
// Compilar: gcc -Wall -Wextra -Werror ft_strlcat.c -o ex05 -lbsd && ./ex05
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

void			ft_strlcat_test(char *dest, char *ft_dest, char *src, unsigned int size)
{
	unsigned int	return_value;
	unsigned int	ft_return_value;

	return_value = strlcat(dest, src, size);
	ft_return_value = ft_strlcat(ft_dest, src, size);
	if (return_value != ft_return_value)
		printf("> KO, expected: %u, got: %u\n", return_value, ft_return_value);
	else if (strcmp(dest, ft_dest) != 0)
		printf("> KO, expected: %s, got: %s\n", dest, ft_dest);
	else
		printf("> OK, result: %s\n", ft_dest);
}

int				main(void)
{
	char			*src;
	char			*dest;
	char			*ft_dest;

	// invalid case, dest is non null terminated in the first size - 1 bytes.
	src = "stuv";
	dest = "abcdefghijklmnopr";
	ft_dest = "abcdefghijklmnopr";
	ft_strlcat_test(dest, ft_dest, src, 0);
	ft_strlcat_test(dest, ft_dest, src, 1);
	ft_strlcat_test(dest, ft_dest, src, 4);
	ft_strlcat_test(dest, ft_dest, src, 10);
	// valid case, dest is null terminated in the first size - 1 bytes, modified and terminated
	src = "ghijkl";
	dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_strlcat_test(dest, ft_dest, src, 8);
	ft_strlcat_test(dest, ft_dest, src, 10);
	return (0);
}