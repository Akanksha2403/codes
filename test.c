#include <stdio.h>
typedef struct test
{
    int a;
    int b;
    int *c;
} test1;

typedef struct test2
{
    int a;
    int b;
    int c;
} test3;

int func(test1 a)
{

    a.a = 1;
    printf("%d", a.a);
    return 0;
}

int main()
{
    test1 s1;
    s1.a = 10;
    s1.b = 20;
    s1.c = &(s1.a);
    func(s1);
    printf("%d", s1.a);
}
