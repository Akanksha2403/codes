#include<stdio.h>

int main(){
    char c1, c2;
    int ad, bd;
    scanf("%c, %c", &c1, &c2);

    ad = c1*100 + c2;
    bd = c1 - c2;

    if(bd < 0){bd = -bd;}
    
    if(bd < 10){
        printf("0");
    }

    printf("%d.%d", bd, ad);

}
