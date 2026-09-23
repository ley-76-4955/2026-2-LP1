#include <stdio.h>
int main () {
    int a=3,b=4;
    int abs_a= (a>0) ? a : -a;
    int abs_b= (b>0) ? b : -b;
    int promedio= (a+b)/2;
    int r=abs_a+abs_b*2-promedio;
    printf("%d",r);
    return 0;
}