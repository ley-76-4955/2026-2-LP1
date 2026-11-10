#include <stdio.h>
#include <string.h>
int main() {
    char texto[] = "Hola";
    size_t longitud = strlen(texto);
    printf("La longitud de '%s' es: %zu\n", texto, longitud);
    
    return 0;
}