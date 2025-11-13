// Balunton, Drew Jancent A. DIT 1-2
#include <stdio.h>
#include <math.h>

int main(){

float x ;
float y ; 
int z ; 

x = 10 ;
y = 15 ;
z = 0 ;

printf("Initial Values: \n") ;
printf("x = %.2f\ny = %.2f \n\n",x, y);

printf("Arithmetic Operators\n") ;
printf("Addition: x + y =  %.2f\n",  x + y) ;
printf("Subraction: x - y =  %.2f\n", x - y ) ;
printf("Multiplication: x * y =  %.2f\n",  x * y) ;
printf("Division: x / y =  %.2f\n\n", x / y ) ;

printf("Logical Operators\n") ;
printf("(x > y) && (x < y): %d\n", x > y && x < y) ; 
printf("(x > y) || (x < y): %d\n", x > y || x < y) ; 
printf("x != y: %d\n\n", x != y ) ;

printf("Assignment Operators\n") ;
printf("Initial z Value = %d\n", z = x) ;
printf("z += 5: %d\n",  z += 5 ) ;
printf("z -= 5: %d\n",  z -= 5 ) ;
printf("z *= 5: %d\n",  z *= 5 ) ;
printf("z /= 5: %d\n",  z /= 5 ) ;
printf("z %%= 5: %d\n",  z %= 5 ) ;

return 0;

}