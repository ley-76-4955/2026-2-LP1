#include <stdio.h>
int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("datos.txt", "r+");
    
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    
    printf("Contenido original:\n");
    
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }
    
    fseek(archivo, 0, SEEK_END);
    
    fprintf(archivo, "Antonio\n");
    fprintf(archivo, "Ana\n");
    fclose(archivo);
    
    return 0;
}