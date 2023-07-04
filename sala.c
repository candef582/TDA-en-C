#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#include "sala.h"

struct SalaS
{
    int num;
    char nombr[20];
    int asientos[TAM];
    int disponible;

};

SalaP crearSala()
{
    SalaP s = malloc(sizeof(struct SalaS));

    printf("\nIngresar numero de sala:\n");
    scanf ("%d", &(s->num));

    printf ("\nIngresar nombre de sala:\n");
    fflush(stdin);
    gets(s->nombr);

    crearAsientos (s);
    buscarAsientos (s);

    return s;
}


void crearAsientos (SalaP s)
{
    for (int i=0; i<10; i++)
    {
        s->asientos[i]= -1;
    }

}

void buscarAsientos (SalaP s)
{
    int contador=0;

    for (int i=0; i<TAM; i++)
    {
        if( s->asientos[i] == -1)
        {
            contador=contador+1;
        }
    }

    s->disponible=(int) contador;
}

void mostrarSala (SalaP s)
{
    printf ("\n-------SALA-------\n");
    printf ("\n Nombre de sala: %s Numero de sala: %d \n", s->nombr, s->num);

    printf("\n Cantidad de asientos disponibles: %d\n", s->disponible);
}

