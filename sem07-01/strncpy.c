#include <stdio.h>
#include <string.h>
int main () {
    char origen[] = "Programacion C";
    char destino[12];
    strncpy(destino, origen, 11);
    
    destino[11] = '\0';
    printf("Destino: %s\n", destino);
    return 0;
}