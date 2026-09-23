#include <stdio.h>
int main () {
    int dia=3;
    int es_laborable_mal = 1 <= dia <= 5;
    int es_laborable_bien = (dia >= 1) && (dia <= 5);
    printf("dia=%d | mal=%d | bien=%d\n", dia, es_laborable_mal, es_laborable_bien);
    
    int A = 1, B = 0;
    printf("!(A && B) = %d\n", !(A && B));
    printf("!A || !B = %d\n", !A || !B);
    
    int divisor = 0;
    if (divisor != 0 && 10 / divisor > 1) {
        printf("No se llega aqui\n");
    } else {
        printf("Cortocircuito protegio la division\n");
    }
    return 0;
}