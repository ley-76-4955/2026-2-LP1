#include <stdio.h>
int main () {
    int a=1,b=2;
    a=b;
    b=a;
    printf("Los valores intercambiados son a:%d y b:%d",a,b);
    return 0;
}