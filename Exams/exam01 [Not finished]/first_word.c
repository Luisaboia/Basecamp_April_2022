// Not finished, the final result is: Not correct.

#include <unistd.h>
#include <stdbool.h>

bool space(char c)
{
    return (c == ' ' || c == '\t');
}

int write_first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] && !space(str[i]))
        i++;
    while (str[i] && space(str[i]))
        i++;
    while (str[i] && !space(str[i]))
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

int first_word_main(int argc, char **argv)
{
    if (argc == 2)
        write_first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}

// tests
int    main(void)
{
  char *arg0[] = {"FOR PONIES !!"};
  first_word_main(1, arg0);
  char *arg1[] = {"this        ...       is sparta, then again, maybe    not"};
  first_word_main(1, arg1);
  char *arg2[] = {"   "};
  first_word_main(1, arg2);
  char *arg3[] = {"a", "b"};
  first_word_main(2, arg3);
  char *arg4[] = {"  lorem,ipsum  "};
  first_word_main(1, arg4);;
  return (0);
}