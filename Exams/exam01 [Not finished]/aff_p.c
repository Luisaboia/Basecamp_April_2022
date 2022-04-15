#include <unistd.h>

void    aff_p(char *str)
{
    write(1, "p\n", 2);
}


// Tests
int main()
{
    char str[] = "paralelepipedo";
    char str2[] = "paralama";
    char str3[] = "teste";
    aff_p(str);
    aff_p(str2);
    aff_p(str3);
    return (0);
}