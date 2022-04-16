#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int *array; 
    array = (int*)(malloc(sizeof(int)*2 )); 
    array[0] = 1, array[1] = 1, array[2] = 10, array[10] = 10;  
    printf("%d, %d\n", array[0], array[100000000]); 
    free(array); 
}