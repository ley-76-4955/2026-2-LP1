#include <stdio.h>
#include <stdlib.h>
void intercambiar (int *a,int *b);
void ordenar_tres (int *a, int *b, int *c);

int main () {
    int *ptr=malloc(3 * sizeof *ptr);
    
    if (ptr!=NULL) {
        printf("Introduzca los numeros: \n");
        for (int i=0;i<3;i++) {
            scanf("%d",ptr+i);
        }
        
        printf("Elementos: \n");
        
        for (int i=0;i<3;i++) {
            printf("%d  ",*(ptr+i));
        }
        
        printf("\nElementos ya ordenados:\n");
        ordenar_tres(ptr,ptr+1,ptr+2);
        free(ptr);
        ptr=NULL;
    } else {
        printf("No se pudo reservar memoria.");
        return 1;
    }
    
}

void intercambiar (int *a, int *b) {
    if (a!=NULL || b!=NULL) {
        int aux;
        aux=*a;
        *a=*b;
        *b=aux;
    }
}

void ordenar_tres (int *a, int *b, int *c) {
    if (*a>*b) {
        intercambiar(a,b);
        if (*b>*c) {
            intercambiar(b,c);
        }
        if (*a>*b) {
            intercambiar(a,b);
        }
    }
    
    if (*a>*c) {
        intercambiar(a,c);
        if (*b>*c) {
            intercambiar(b,c);
        }
    }
    
    printf("%d <= %d <= %d",*a,*b,*c);
}