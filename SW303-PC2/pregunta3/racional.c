#include <stdio.h>
int mcd (int a, int b) {
    int r=a%b;
    if (r==0) {
        return b;
    } else {
        mcd(b,r);
    }
}

void simplificar(int *num, int *den) {
    int maxdiv=mcd(*num,*den);
    if (maxdiv!=1) {
        (*num)/=maxdiv;
        (*den)/=maxdiv;
    }
}

void sumar(int n1,int d1,int n2,int d2,int *n_res,int *d_res) {
    *n_res=n1*d2 + n2*d1;
    *d_res=d1*d2;
    simplificar(*n_res,*d_res);
}