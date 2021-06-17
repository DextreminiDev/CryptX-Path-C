#include <cs50.h>
#include <stdio.h>

int average(int num1, int num2, int num3);

int main(void){
    int students = get_int("Enter the number of students : ");

    for(int i = 0; i < students; i++){
        int score1 = get_int("Enter Score 1 : ");
        int score2 = get_int("Enter Score 2 : ");
        int score3 = get_int("Enter Score 3 : ");

        if(average(score1,score2,score3) >= 50){
            printf("Student %i Passed.\n", i+1);
        }
        else{
            printf("Student %i Failed.\n", i+1);
        }

    }
}

int average(int num1, int num2, int num3){
    return (num1+num2+num3)/3;
}