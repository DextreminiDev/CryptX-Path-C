#include <cs50.h>
#include <stdio.h>

int main(void){
    int score;

    do{
        score = get_int("Enter your score : ");
    }while(0 > score || 100 < score);

    if(score >= 90){
        printf("You passed with Honors!\n");
    }
    else if(score >= 60){
        printf("You passed.\n");
    }
    else{
        printf("You failed, better luck next time :)\n");
    }
}