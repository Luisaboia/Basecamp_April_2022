#include <stddef.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            while (str[i] == to_find[j])
            {
                i++;
                j++;
            }
            if (to_find[j] == '\0')
                return (&str[i - j]);
            j = 0;
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char *haystack;
	char *needle;
	char *result_c;
	char *result_ft;

	haystack = "Foo Bar Baz";
	needle = "Bar";
	result_c = strstr(haystack, needle);
	result_ft = ft_strstr(haystack, needle);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}