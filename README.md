# Simulador de duelo em formato RPG
Este é um projeto de duelo/RPG, com fins de estudo na linguagem C.

**Funcionalidades:**

* Simulação de uma batalha entre dois jogadores com atributos de HP (vida), ataque e defesa gerados aleatoriamente.
* Funções para cálculo de dano, atualização de vida e geração de valores aleatórios. <br>
* Criação de um loop de combate que alterna entre os dois jogadores até que um deles fique sem HP. 

**Tecnologias:**

* C: Linguagem usada para estruturar a lógica de combate e manipulação de dados dos jogadores. <br>
* Funções da biblioteca stdlib.h e time.h: <br>

srand(time(NULL)): Gera uma semente baseada no tempo atual para criar números aleatórios. <br>
rand() % (max - min + 1) + min: Gera números aleatórios dentro de um intervalo, utilizado para definir os atributos dos jogadores. <br>

**Como Usar:**

Compile e rode o código em C usando um compilador como gcc.
