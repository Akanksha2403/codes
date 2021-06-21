#include<stdio.h>
int win(int first_move, int second_move){
    if((first_move == 5 && second_move == 0) || (first_move == 2 && second_move == 5) || (first_move == 0 && second_move == 2))
    return 0;
    return 1;
}
int main(){
    char first[30], second[30];
    int first_move, second_move;
    printf("Enter first participant's name (maximum 30 characters): ");
    scanf("%s", first);
    printf("Enter second participant's name (maximum 30 characters): ");
    scanf("%s", second);
    printf("Enter participant moves\n0 means Rock\n2 means Scissors\n5 means Paper\n\n");
    printf("First participant's move:");
    scanf("%d", &first_move);
    printf("Second participant's move:");
    scanf("%d", &second_move);
    
    // removing invalid moves
    switch (first_move)
    {
    case 0:
    case 5:
    case 2:        
        break;
    default:
        printf("Invalid move detected...");
        return 0;
    }
    switch (second_move)
    {
    case 0:
    case 5:
    case 2:        
        break;
    default:
        printf("Invalid move detected...");
        return 0;
    }
    if(first_move == second_move){
        printf("It's a draw !!");
        return 0;
    }
    if(win(first_move, second_move) == 0){
        printf("The winner is %s", first);
        return 0;
    }
    printf("The winner is %s", second);
    return 0;
}