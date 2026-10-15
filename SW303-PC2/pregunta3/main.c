#include <stdio.h>
int main () {
    int n1,d1,n2,d2;
    int num,den;
    printf("Escriba la primera fraccion:\n");
    printf("Numerador 1: "); scanf("&d",n1);
    printf("Denominador 1: "); scanf("&d",d1);
    
    printf("Escriba la segunda fraccion:\n");
    printf("Numerador 2: "); scanf("&d",n2);
    printf("Denominador 2: "); scanf("&d",d2);
    
    printf("La suma es: %d",sumar(n1,d1,n2,d2,&num,&den));
    
    return 0;
}