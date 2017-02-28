#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int numero;
    nodo *siguiente;
}*inicio;

int main()
{
    nodo *uno=(nodo*)malloc(sizeof(int));
    nodo *dos=(nodo*)malloc(sizeof(int));
    nodo *tres=(nodo*)malloc(sizeof(int));

    inicio=uno;
    uno->siguiente=dos;
    dos->siguiente=tres;
    tres->siguiente=NULL;

    uno->numero=1;
    dos->numero=2;
    tres->numero=3;

    printf("Valor Posicion 1=%d\n",inicio->numero);
    printf("Valor Posicion 2=%d\n",inicio->siguiente->numero);
    printf("Valor Posicion 3=%d\n",inicio->siguiente->siguiente->numero);

    return 0;
}
