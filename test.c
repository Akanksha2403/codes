#include <stdio.h>
#include <string.h>

int main()
{
    int number_of_elements, i;
    int temp;
    FILE *fptr = NULL;
    char file_name[22];

    fgets(file_name, 20, stdin);

    file_name[strlen(file_name) - 1] = '\0';

    fptr = fopen(file_name, "rb");

    fread(&number_of_elements, sizeof(int), 1, fptr);

    for (i = 0; i < number_of_elements; i++)
    {
        fread(&temp, sizeof(int), 1, fptr);
        printf("%d\n", temp);
    }

    fclose(fptr);
}