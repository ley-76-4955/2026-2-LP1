#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int num;

    struct nodo *izq, *der;
} Nodo;

Nodo* insertarElemento (Nodo **p, int valor) {
    if (*p == NULL) {
        *p = calloc(1,sizeof(Nodo));
        (*p)->num = valor;

        return *p;
    }
    else if (valor < (*p)->num) {
        (*p)->izq = insertarElemento(&((*p)->izq), valor);
        return (*p)->der;
    }
    else {
        (*p)->der = insertarElemento(&((*p)->der), valor);
        return (*p)->der;
    }
}

int buscar (Nodo *p, int valor) {
    if (p == NULL) {
        return 0;
    }
    else if (valor == p->num) {
        return 1;
    }
    else if (valor < p->num) {
        return buscar((p->izq), valor);
    }
    else {
        return buscar((p->der), valor);
    }
}

void imprimirArbol(Nodo *p) {

    if (p != NULL) {
        imprimirArbol(p->izq);
        printf("Valor: %d\n", p->num);
        imprimirArbol(p->der);
    }

}

int main() {

    Nodo *TREE = NULL;

    insertarElemento(&TREE, 10);
    insertarElemento(&TREE, 12);
    insertarElemento(&TREE, 7);

    imprimirArbol(TREE);

    if (buscar(TREE, 10)) {
        printf("Se encontro a 10\n");
    }
    else {
        printf("No se encontro a 10\n");
    }

    return 0;
}