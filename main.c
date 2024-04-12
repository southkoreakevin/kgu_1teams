// main.c

#include "pokemon.h"
#include "game.h"

int main() {
    printf("===============================\n");
    printf("     K.Knock Pokemon Game\n");
    printf("     press enter to start\n");
    printf("===============================\n");

    // 사용자가 엔터 키를 누를 때까지 대기
    while(getchar() != '\n') {
            // 아무것도 하지 않고 루프를 계속 돕니다.
    }
    
    Pokemon *allPokemons = NULL;
    int totalPokemonCount = 0;
    loadPokemons("pokemon.txt", &allPokemons, &totalPokemonCount);

    Game game;
    startGame(&game, allPokemons, totalPokemonCount);

    if (allPokemons) {
        free(allPokemons);
    }

    return 0;
}

