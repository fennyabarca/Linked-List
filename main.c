#include "lista.h"
#include "no.h"
#include <stdio.h>
#include <stdlib.h>


void teste_no () {
    struct no no1, no2;
    struct no * pn;
    
    no1.info = 4;
    no1.prox = NULL;
    no2.info = 7;
    no2.prox = &no1;
    printf ("\nno1.info = %d", no1.info);
    printf ("\nno1.prox = %p", no1.prox);
    printf ("\nno2.info = %d", no2.info);
    printf ("\nno2.prox = %p", no2.prox);
    //printf ("\npn = %p", pn);
    //pn->info = 10;
    pn = (struct no *) malloc (sizeof(struct no));
    printf ("\npn = %p", pn);
    pn->info = 10;
    pn->prox = &no2;
    printf ("\npn->info = %d", pn->info);
    printf ("\npn->prox = %p", pn->prox);
    
    no2.prox->info = 15;
    printf ("\nno1.info = %d", no1.info);
    pn->prox->info = 27;
    printf ("\nno2.info = %d", no2.info);
    
}
void teste_lista() {
    t_lista l;
    int i;
    inicia_lista(&l);
    if (lista_vazia(&l))
        printf ("lista inicializada com sucesso!\n");
    else
        printf ("inicializacao falhou!\n");
        printf ("Insercoes de inicio\n");
    
    for (i=1; i<=5; i++) {
        insere_inicio(i, &l);
        exibe_lista(&l);
    }
    while (!lista_vazia(&l)) {
        printf ("%d foi removido do inicio\n", remove_inicio(&l));
        exibe_lista(&l);
    }
    printf ("Insercoes de fim\n");
    for (i=1; i<=5; i++) {
        insere_fim(i, &l);
        exibe_lista(&l);
    }
    while (!lista_vazia(&l)) {
        printf ("%d foi removido do fim\n", remove_fim(&l));
        exibe_lista(&l);
    }
}

/*Exercicio conta quantos nos tem na lista
void contador_no (t_lista *pl){
    int contador = 0;
    struct no * aux = NULL;
    //aux = no;
    while (aux != NULL){
        contador ++;
        printf("O dado dentro do no e:  %d\n", aux->info);
        aux = aux->prox;
        contador = (int)contador_no;
        printf("\n O TOTAL DE NOS NA LISTA = %d\n", contador);
    }
}*/


int main(int argc, char *argv[]) {
    //teste_no();
    teste_lista();
    return 0;
}


