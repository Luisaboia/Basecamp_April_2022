#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;
	int	s;

	s = 0;
	while (str[s])
		s++;
	i = 0;
	while (i < s)
	{
		write(1, &str[s - 1 - i], 1);
		i++;
	}
	return (str);
}

// Tests
int main()
{
    char str[] = "paralelepipedo";
    char str2[] = "paralama";
    char str3[] = "teste";
    rev_print(str);
    write(1, "\n", 1);
    rev_print(str2);
    write(1, "\n", 1);
    rev_print(str3);
    write(1, "\n", 1);
    return (0);
}