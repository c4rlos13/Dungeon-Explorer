# Dungeon Explorer

Projeto de jogo de exploração em modo texto desenvolvido em C para a disciplina de Programação Imperativa e Funcional.

## Estrutura do Projeto

- `src/`: Código-fonte do jogo.
- `include/`: Arquivos de cabeçalho.
- `build/`: Arquivos gerados pela compilação.

## Mecânica do Jogo

Dungeon Explorer é um jogo de exploração em modo texto onde o jogador se aventura em uma masmorra cheia de inimigos. O objetivo é sobreviver enquanto explora e tenta encontrar a saída. O jogador tem um valor de vida e ataque e pode sofrer danos ao encontrar inimigos. A cada encontro, o jogador pode decidir enfrentar ou tentar escapar. Cada decisão afeta o progresso e a sobrevivência do jogador.

### Elementos Principais da Mecânica:
1. **Exploração**: O jogador explora a masmorra e encontra inimigos aleatoriamente.
2. **Combate**: Ao encontrar um inimigo, o jogador pode lutar ou tentar fugir. Se luta, o jogador recebe dano conforme o ataque do inimigo.
3. **Pontuação**: O progresso é medido com base na quantidade de inimigos derrotados e nas áreas exploradas.
4. **Fim de Jogo**: O jogo termina quando o jogador encontra a saída ou quando sua vida chega a zero.

## Compilação e Execução

1. Compile o projeto com o comando:
   ```bash
   gcc src/*.c -o DungeonExplorer
