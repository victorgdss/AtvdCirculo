#include "circulo.h"
#include <stdlib.h>

struct Circulo{
    float centrox;
    float centroy;
    float raio;
};

Circulo *circ_cria(float x, float y, float r)
{
    Circulo *crcl = malloc(sizeof(Circulo));
    crcl->centrox= x;
    crcl->centroy= y;
    crcl->raio=r;
    return(crcl);
}

void circ_libera(Circulo *c)
{
    free(c);
}

float circ_area(Circulo *c)
{
    return(3.14159265358979323846*(c->raio)*(c->raio));
}

int circ_concentricos(Circulo *c1, Circulo *c2)
{
    if((c1->centrox == c2->centrox) && (c1->centroy == c2->centroy))
    {
        return(1);
    }
    else
    {
       return(0);
    }
}

float circ_raio(Circulo *c)
{
    return(c->raio);
}