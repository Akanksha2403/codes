#include <stdio.h>
int main()
{
    char ch[10] = "Hello", c[100];

    printf("Enter a message upto 100 char");
    scanf("%[^\n]", &c);
    FILE *fptr = fopen("textfile.txt", "w");
    fprintf(fptr, "%s", c);
    fprintf(fptr, "%s", "helloword");
    printf("Message saved !");
    fclose(fptr);
    return 0;
    ofstream outfile;
}