#include <stdio.h>
void saludar();
int devolver_anio_actual();

int main () {
    printf("Iniciando programa...\n");
    saludar();
    return 0;
}

int devolver_anio_actual () {
    return 2026;
}

void saludar () {
    printf("Bienvenidos a SW303 en este año %d\n",devolver_anio_actual());
}