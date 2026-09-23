#include <stdio.h>
int main() {
    int a=1,b=2;
    int aux;
    aux=a;
    a=b;
    b=aux;
    
    printf("Los valores intercambiados son a:%d y b:%d",a,b);
    return 0;
}