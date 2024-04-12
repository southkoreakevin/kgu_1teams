// pokemon.c

#include "pokemon.h"

void loadPokemons(const char *filename, Pokemon **pokemons, int *count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("File not found.\n");
        return;
    }

    fscanf(file, "%d", count);
    *pokemons = (Pokemon *)malloc(sizeof(Pokemon) * (*count));
    for (int i = 0; i < *count; i++) {
        fscanf(file, "%s %s %d %d", (*pokemons)[i].name, (*pokemons)[i].type, &(*pokemons)[i].minAttack, &(*pokemons)[i].minHP);
    }

    fclose(file);
}

