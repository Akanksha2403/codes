#include<stdio.h>
int main(){
    unsigned int x = 3;
    while (x-- >= 0)
    {
        printf("%d ", x);
        if(x < -25){
            printf("\n This condition is executed \n");
            break;
        }
    }
    
}