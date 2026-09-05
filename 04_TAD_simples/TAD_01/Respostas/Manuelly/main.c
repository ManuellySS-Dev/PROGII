#include <stdio.h>
#include "jogo.h"

int main(){
    tJogo jogo;
    jogo = CriaJogo();
    ComecaJogo(jogo);
    printf("Jogar novamente? (s,n)\n");
    ContinuaJogo();
    return 0;
}