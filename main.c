#include <stdlib.h> 
#include <stdio.h>  
#include <time.h>   

//Randomizador
int get_random(int min, int max) { 
int random;
random = (rand() % (max - min + 1) + min);
return random;
} 

//Função: dano
int get_damage(int ataque, int defesa) {
  int damage;
  damage = (ataque - defesa);
  if (damage <= 0) {
    damage = 1;
  } 
  return damage;
}

//Função: vida restante
int get_life(int vida, int dano) {
  int life;
  life = (vida - dano);
  if (life < 0) {
    life = 0;
  }
  return life;
}

//MAIN
int main() {
  srand(time(NULL));

//Randomizador de status
  int hp_P1, att_P1, def_P1;
  int hp_P2, att_P2, def_P2;
  do {
    hp_P1 = get_random(1,18);
    att_P1 = get_random(1,18);
    def_P1 = get_random(1,18);
  } while (hp_P1 + att_P1 + def_P1 != 18);
  do {
    hp_P2 = get_random(1,18);
    att_P2 = get_random(1,18);
    def_P2 = get_random(1,18);
  } while (hp_P2 + att_P2 + def_P2 != 18);

//Printa status
  printf("Os status do Player 1 sao: HP - %d, ATCK - %d, DEF - %d.\n", hp_P1, att_P1, def_P1);
  printf("Os status do Player 2 sao: HP - %d, ATCK - %d, DEF - %d.\n\n\n", hp_P2, att_P2, def_P2);

//Loop: combate
  int toPlay = get_random(1,2);

  while (hp_P1 > 0 && hp_P2 > 0) {
    if (toPlay == 1) {
      int resultDamageP2 = get_damage (att_P1, def_P2);
      hp_P2 = get_life (hp_P2, resultDamageP2);
      printf("O Player 1 vai atacar!\n");
      printf("Player 2 sofreu %d de dano.\n", resultDamageP2);
      printf("A vida do Player 2 agora e %d.\n\n\n", hp_P2);
      toPlay = 2;
    } else {
        int resultDamageP1 = get_damage (att_P2, def_P1);
        hp_P1 = get_life (hp_P1, resultDamageP1);
        printf("O Jogador 2 vai atacar!\n");
        printf("Player 1 sofreu %d de dano.\n", resultDamageP1);
        printf("A vida do Player 1 agora e %d.\n\n\n", hp_P1);
        toPlay = 1;
    }
  } if (hp_P1 == 0) {
    printf("O Player 1 morreu.\n");
    printf("O Player 2 venceu!\n");
  } else {
      printf("O Player 2 morreu.\n");
      printf("O Player 1 venceu!\n");
  }
  return 0;
}
