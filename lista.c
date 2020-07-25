#include "lista.h"
//#include "no.h"

void inicia_lista (t_lista *pl) {
    pl->primeiro = NULL;
}
int lista_vazia (t_lista *pl) {
    if (pl->primeiro == NULL)
        return 1;
    return 0;
}
int insere_inicio (int i, t_lista *pl) { //devolve sucesso ou fracasso
    struct no * novo = cria_no(i);
    if (novo != NULL) {
        if (!lista_vazia(pl)) {
            novo->prox = pl->primeiro;
        }
        pl->primeiro = novo;
        return 1;
    }
    return 0;
}
int remove_inicio (t_lista *pl) {
    struct no * aux;
    int i;
    aux = pl->primeiro;
    i = aux->info;
    pl->primeiro = pl->primeiro->prox;
    free(aux);
    return i;
}
void exibe_lista (t_lista *pl) {
    struct no * aux;
    if (lista_vazia(pl)) {
        printf ("lista vazia");
    }
    else {
        aux = pl->primeiro;
        while (aux != NULL) {
            printf ("%d ", aux->info);
            aux = aux->prox;
        }
    }
    printf ("\n");
}

//Operações de fila
int insere_fim (int i, t_lista *pl){
    struct no * novo = cria_no(i);
    struct no * aux = pl->primeiro;
    if (novo == NULL)
        return 0;
    if (lista_vazia(pl)){
        pl->primeiro = novo;
    }else{
        aux = pl->primeiro;
        while (aux->prox !=NULL){
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return 1;
}

int remove_fim (t_lista *pl){
    int i;
    struct no * aux;
    if (pl->primeiro->prox == NULL){
        i = pl->primeiro->info;
        free(pl->primeiro);
        pl->primeiro = NULL;
    }else{
        aux = pl->primeiro;
        while (aux->prox->prox != NULL){
            aux = aux->prox;
        }
        i = aux->prox->info;
        free (aux->prox);
        aux->prox = NULL;
    }
    return i;
}
