#include <cs50.h>
#include <stdio.h>

int average(int length, int arr[]);

int main(void){
    int no = get_int("Number of scores : ");
    int scores[no];

    for(int i = 0; i < no; i++){
        scores[i] = get_int("Enter your score : ");
    }

    printf("Average is %i\n", average(no, scores));
}

int average(int length, int arr[]){
    int total = 0;

    for(int i = 0; i < length; i++){
        total = total + arr[i];
    }

    return total / length;
}