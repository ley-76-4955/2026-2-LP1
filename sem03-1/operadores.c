#include <stdio.h>
int main () {
    int a=17,b=7,c=71;
    printf("Operadores Aritmeticos\n");
    printf("La suma de %d + %d es %d\n",a,b,a+b);
    printf("La resta de %d + %d es %d\n",a,b,a-b);
    printf("La multiplicacion de %d y %d es %d\n",a,b,a*b);
    printf("La division entera de %d entre %d es %d\n",a,b,a/b);
    printf("La division real (float)%d entre %d y %f\n",a,b,(float)a/b);
    printf("El resto (%%) de dividir %d entre %d es %d\n",a,b,a%b);
    
    printf("\nOperadores de Comparacion\n");
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    printf("%d>%d? es %d\n",a,b,a>b);
    printf("%d>%d? es %d\n",b,c,b>c);
    printf("%d>%d y %d>%d es %d\n",a,b,b,c,(a>b) && (b>c));
    printf("%d>%d o %d>%d es %d\n",a,b,b,c,(a>b) || (b>c));
    return 0;
}