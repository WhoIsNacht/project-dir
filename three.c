// Balunton, Drew Jancent A. DIT 1-2
#include <stdio.h>

int main(){

    int i = 1 ;

    printf("While loops: \n") ;
    while(i <= 10){

        printf("%d ", i);
        i++;

    }
    printf("\n\n");
    
    printf("For loops: \n");
    for( i = 2; i <= 20; i+=2 ){

        printf("%d ", i);
    }

    printf("\n\n");

    i = 1;

    printf("Do While: \n");
    do{
        printf("%d ", i) ;
        i++;
    }while(i <= 5);    
    
    return 0;
}