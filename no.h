//#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct no {
    int info;
    struct no * prox;
};

struct no * cria_no (int);

