// game.h

#ifndef GAME_H
#define GAME_H

#include "pokemon.h"

// 게임의 주요 상태 및 로직을 관리하는 구조체
typedef struct {
    Pokemon *playerPokemons;
    int pokemonCount;
    int money;
} Game;

void startGame(Game *game, Pokemon *allPokemons, int totalPokemonCount);
void mainMenu(Game *game);

#endif

