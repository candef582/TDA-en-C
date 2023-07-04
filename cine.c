#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
#include "cine.h"
#include "sala.h"

struct Cines
{
    char nombre [20];
    char direccion [30];

    SalaP cantidad[TAM]
};

Cinep crearCine ()
{
    Cinep c = malloc(sizeof(struct Cines));

    printf ("\n Ingresar nombre del cine: \n");
    fflush(stdin);
    gets(c->nombre);

    printf ("\n Ingresar direccion: \n");
    fflush(stdin);
    gets(c->direccion);

    for (int i=0; i<TAM; i++)
    {
        c->cantidad[i]=crearSala();
    }


    return c;
}


void mostrarCine (Cinep c)
{
    printf ("\n-------CINE-------\n");
    printf ("\n Nombre del cine: %s Direccion: %s", c->nombre, c->direccion);

     for (int i=0; i<TAM; i++)
    {
        mostrarSala(c->cantidad[i]);
    }
}

