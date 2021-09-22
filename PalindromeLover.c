#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int count = 0;
    int a_bool = 0;
    char str[6], copy[6];
    printf("Give me a 5-character word in lowercase: ");
    scanf("%s", str);
    strcpy(copy, str);
    
    for (int i = 0; i < 6; i++)
    {
        if(isupper(str[i])){
            a_bool = 1;
        }
    }
    
    if(str[4] == '\0' || str[3] == '\0' || str[2] == '\0' || str[1] == '\0' || a_bool){
        printf("Invalid input...");
        return 0;
    }   
    

    if(str[0] > str[4]){    // for making index 0 and index 4 same
        count += 1;
        str[0] = str[4];
    }
    else if(str[0] == str[4]){
    }
    else{
        count += 1;
        str[4] = str[0];
    }
    
    if(str[1] > str[3]){    // for making index 1 and index 3 same
        count += 1;
        str[1] = str[3];
    }
    else if(str[1] == str[3]){
    }
    else{
        count += 1;
        str[3] = str[1];
    }
    
    
    switch (count)
    {
    case 0:
        printf("%s is already a palindrome !!", str);
        break;
    default:
        printf("I have changed %s to %s by making %d change(s) !!", copy, str, count);
        break;
    }

    return 0;
}