#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    char nombre;
    nodo *siguiente;
}*inicio;

int main()
{
    nodo *uno=(nodo*)malloc(sizeof(char));
    nodo *dos=(nodo*)malloc(sizeof(char));
    nodo *tres=(nodo*)malloc(sizeof(char));
    nodo *cuatro=(nodo*)malloc(sizeof(char));
    nodo *cinco=(nodo*)malloc(sizeof(char));

    inicio=uno;
    uno->siguiente=dos;
    dos->siguiente=tres;
    tres->siguiente=cuatro;
    cuatro->siguiente=cinco;
    cinco->siguiente=NULL;

    uno->nombre='l';
    dos->nombre='u';
    tres->nombre='c';
    cuatro->nombre='h';
    cinco->nombre='o';

    printf("%c%c%c%c%c",inicio->nombre,inicio->siguiente->nombre,inicio->siguiente->siguiente->nombre,inicio->siguiente->siguiente->siguiente->nombre,inicio->siguiente->siguiente->siguiente->siguiente->nombre);

    return 0;
}
