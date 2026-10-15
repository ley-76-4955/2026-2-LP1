#include <stdio.h>
int ackermann (int m,int n);

int main () {
    printf("El valor de la funcion de ackermann ");
    printf("cuando m=3 y n=4 es %d\n",ackermann(3,4));
    
    return 0;
}

int ackermann(int m,int n) {
    if (m==0) {
        return n+1;
    } else if (m>0 && n==0) {
        ackermann(m-1,1);
    } else if (m>0 && n>0) {
        ackermann(m-1,ackermann(m,n-1));
    }
}