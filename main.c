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

void enfileirar(struct Fila* f, int item)
{
    assert(f != NULL);
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if(novo_no != NULL)
    {
        novo_no->info = item;
        novo_no->proximo = NULL;

        if(f->fim != NULL)
        {
            f->fim->proximo = novo_no;    
        } else 
        {
            f->inicio = novo_no;
        }
        f->fim = novo_no;
        f->tamanho++;
    }

}

int desenfileirar(struct Fila* f)
{
    assert(f != NULL);
    assert(f->inicio != NULL);
    struct No* aux = f->inicio;
    int elemento = aux->info;
    f->inicio = aux->info;
    if(f->inicio == NULL)
    {
        f->fim = NULL;
    }

}

bool vazia(struct Fila* f)
{
    assert(f != NULL);
    return (f->inicio == NULL);
}

int tamanho(struct Fila* f)
{
    assert(f != NULL);
    return f->tamanho;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
