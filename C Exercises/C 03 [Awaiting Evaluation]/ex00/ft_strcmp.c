int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]); 
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Hello";
	str2 = "Hell";
    if ((strcmp(str1, str2) == 0) && (ft_strcmp(str1, str2) == 0))
	{
        printf("%s\n", "As duas strings são iguais.\n");
	}
    else if ((strcmp(str1, str2) > 0) && (ft_strcmp(str1, str2) > 0))
	{
        printf("%s\n", "Primeira string é maior\n");
	}
    else
	{
        printf("%s\n", "Segunda string é maior\n");
	}
	printf("strcmp:   %d\n", strcmp(str1, str2));
	printf("ft_strcmp:   %d\n", ft_strcmp(str1, str2));
}