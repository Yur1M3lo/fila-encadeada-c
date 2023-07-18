#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct No
{
    int info;
    struct No* proximo;
};

struct Fila
{
    struct No* inicio;
    struct No* fim;
    int tamanho;
};

struct Fila* criar()
{
    struct Fila* nova_fila = (struct Fila*) malloc(sizeof(struct Fila));
    if(nova_fila != NULL)
    {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }
    return nova_fila;
}



int main(int argc, char const *argv[])
{
    
    return 0;
}
