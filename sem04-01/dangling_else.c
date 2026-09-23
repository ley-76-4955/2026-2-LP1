#include <stdio.h>
int main () {
    int a=1,b=2;
    
    if (a>0)
        if (b>0)
            printf("Ambos positivos\n");
    else 
        printf("Cuando se imprime esto?\n");
        
    //Version correcta
    
    if (a>0) {
        if (b>0) {
            printf("Ambos positivos\n");
        }
    } else {
        printf("a no es positivo\n");
    }
    
    return 0;
}