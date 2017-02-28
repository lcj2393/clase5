#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uno=1;
    int dos=2;
    int tres=3;

    int *puno=&dos;
    int *pdos=&tres;
    int *ptres=NULL;

    printf("Valor de uno %d\n",*puno);
}
