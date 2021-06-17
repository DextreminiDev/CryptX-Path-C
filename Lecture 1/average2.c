#include <stdio.h>

int average(int num1, int num2, int num3, int num4);

int main(void){
    int score1 = 25;
    int score2 = 50;
    int score3 = 75;
    int score4 = 100;

    int avg = average(score1,score2,score3,score4);

    printf("%i\n", avg);
}

int average(int num1, int num2, int num3, int num4){
    return (num1+num2+num3+num4)/4;
}