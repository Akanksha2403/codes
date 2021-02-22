#include <stdio.h>

int printer(int num)
{
    int i = num;
    while (i > 0)
    {
        printf("%d", i % 10);
        i -= 1;
    }
    while (i <= num)
    {
        printf("%d", i % 10);
        i += 1;
    }
    printf("\n");
    return 0;
}
int logic(int num)
{

    for (int a = -num; a <= num; a++)
    {
        int i = a;
        if (i < 0){i = -i;}     // Making it positive
        for (int j = num - i; j != 0; j--)
        {
            printf(" ");
        }
        printer(i);
    }
}
int main()
{
    int a;
    printf("Give me the size of hourglass: ");
    scanf("%d", &a);
    logic(a);
    return 0;
}
