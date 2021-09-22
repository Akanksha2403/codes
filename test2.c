#include <stdio.h>
#include <string.h>

int main()
{
    FILE *myfile = NULL;
    char f[22];
    int something, ctr, temp;
    fgets(f, 20, stdin);
    f[strlen(f) - 1] = '\0';
    myfile = fopen(f, "rb");

    fread(&something, sizeof(int), 1, myfile);

    
    for (ctr = 0; ctr < something; ctr++)
    {
        fread(&temp, sizeof(int), 1, myfile);
        printf("%d\n", temp);
    }

    fclose(myfile);
}