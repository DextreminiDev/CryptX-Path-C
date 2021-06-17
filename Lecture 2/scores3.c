#include <cs50.h>
#include <stdio.h>

int main(void){
    int scores[4];

    for(int i = 0; i < 4; i++){
        scores[i] = get_int("Enter a number : ");
    }

    for(int i = 0; i < 4; i++){
        printf("%i\n", scores[i]);
    }
}