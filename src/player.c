#include "player.h"
#include <stdio.h>

void initializePlayer(Player *player) {
    player->health = 100;
    player->attack = 10;
    printf("Jogador inicializado com %d de saúde e %d de ataque.\n", player->health, player->attack);
}

void takeDamage(Player *player, int damage) {
    player->health -= damage;
    printf("Jogador recebeu %d de dano. Saúde atual: %d\n", damage, player->health);
}
