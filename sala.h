#ifndef SALA_H_INCLUDED
#define SALA_H_INCLUDED

struct SalaS;

typedef struct SalaS * SalaP;

void mostarSala (SalaP s);

SalaP crearSala();

void crearAsientos (SalaP s);


#endif // SALA_H_INCLUDED
