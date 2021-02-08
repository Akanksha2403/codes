#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("%d %d %d", *(ptr), *(ptr+1), *(ptr+2));
    
    return 0;
} 