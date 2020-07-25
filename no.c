#include "no.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct no * cria_no (int i) {
    struct no * aux;
    aux = (struct no *) malloc (sizeof (struct no));
    if (aux != NULL) {
        aux->info = i;
        aux->prox = NULL;
    }
    return aux;
}
