// game.c

#include "game.h"

void startGame(Game *game, Pokemon *allPokemons, int totalPokemonCount) {
    // 여기에서 게임 시작 로직 구현
    printf("게임을 시작합니다...\n");
    // 초기화 및 게임 상태 설정
    game->pokemonCount = 0;
    game->money = 10000;  // 기본 금액 설정
    mainMenu(game);
}

void mainMenu(Game *game) {
    // 메인 메뉴 로직 구현
    printf("메인 메뉴\n");
    printf("1. 모험 진행하기\n");
    printf("2. 저장하기\n");
    printf("3. 상점\n");
    printf("4. 포켓몬 센터\n");
    printf("5. 포켓몬 도감\n");
    // 여기에 메뉴 선택에 따른 로직 추가
}

