#include <stdio.h>
#include "dungeon.h"
#include "player.h"
#include "enemy.h"

int main() {
    printf("Bem-vindo ao Dungeon Explorer!\n");

    Player player;
    initializePlayer(&player);

    initializeDungeon();
    Enemy enemy;
    spawnEnemy(&enemy);

    printf("Você encontrou um inimigo!\n");
    takeDamage(&player, enemy.attack);

    printf("Fim de jogo. Obrigado por jogar!\n");
    return 0;
}
