#include <stdio.h>
int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("letras.txt", "r+");
    
    if (archivo == NULL) {
       printf("Error al abrir el archivo.\n");
       return 1;
    }
    
    fgets(linea, sizeof(linea), archivo);
    printf("Contenido original: %s\n", linea);
    
    fseek(archivo, 0, SEEK_SET);
    
    fprintf(archivo, "XYZ");
    fclose(archivo);
    return 0;
}