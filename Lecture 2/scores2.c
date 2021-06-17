#include <stdio.h>

int main(void){
    int scores[4];

    scores[0] = 25;
    scores[1] = 50;
    scores[2] = 75;
    scores[3] = 100;

    for(int i = 0; i < 4; i++){
        printf("%i\n", scores[i]);
    }
