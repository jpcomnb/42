#include "my_header.h"

void func1(int *p)
{
    *p = 5;
    printf("func value: |%d| \n", *p);
}

int main2(void)
{
    int a = 3;
    int *p;

    p = &a;
    func1(p);
    printf("main value: |%d|\n", *p);
    return (0);
}

// ---------------------------

void    iterate_str(char **new_str)
{
    (*new_str)++;
}

void    iterate_str2(char **new_str)
{
    (*new_str)--;
}

int main(void)
{
    char *str;

    str = malloc((2 + 1) * sizeof(char));
    if (!str)
        return (1);
    str[0] = 'O';
    str[1] = 'L';
    str[2] = 0;
    printf("|%p|\n", str);
    iterate_str(&str);
    printf("%p\n", str);
    iterate_str2(&str);
    printf("%d\n", VALUE);
    free(str);
    return (0);
}