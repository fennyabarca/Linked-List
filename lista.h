#include "no.h"

typedef struct lista{
    struct no * primeiro;
} t_lista;

void inicia_lista (t_lista *);
int lista_vazia (t_lista *);
int insere_inicio (int, t_lista *);
int remove_inicio (t_lista *);
void exibe_lista (t_lista *);
void contador_no (t_lista *);

//Operações de fila
int insere_fim (int i, t_lista *);
int remove_fim (t_lista *);
