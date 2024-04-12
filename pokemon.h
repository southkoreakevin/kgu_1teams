// pokemon.h

#ifndef POKEMON_H
#define POKEMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char type[10];
    int minAttack;
    int minHP;
} Pokemon;

void loadPokemons(const char *filename, Pokemon **pokemons, int *count);

#endif

