// Balunton, Drew Jancent A. DIT 1-2
#include <stdio.h>

int main(){

    int number;

    printf("Pick a number: ");
    scanf ("%d"), & number;

    if(number % 2 > 0){

        printf("Even");
    }else
    {
        printf("Odd");
    }
}