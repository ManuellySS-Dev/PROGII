#include "jogo.h"
#include "tabuleiro.h"
#include "jogador.h"

tJogo CriaJogo(){
    tJogo jogo;
    jogo.tabuleiro = CriaTabuleiro();
    jogo.jogador1 = CriaJogador(1);
    jogo.jogador2 = CriaJogador(2);
    return jogo;
}

void ComecaJogo(tJogo jogo){
    int i=1;
    while(1){
        if(AcabouJogo(jogo) == 1){
            break;
        }
        if(i%2 != 0){
            printf("Jogador 1\n");
           JogaJogador(jogo.jogador1, jogo.tabuleiro); 
        }else{
            printf("Jogador 2\n");
           JogaJogador(jogo.jogador2, jogo.tabuleiro); 
        }
        i++;
    }
}

int AcabouJogo(tJogo jogo){
    if(TemPosicaoLivreTabuleiro(jogo.tabuleiro)){
        if(VenceuJogador(jogo.jogador1, jogo.tabuleiro) == 0 && VenceuJogador(jogo.jogador2, jogo.tabuleiro) == 0){
            return 0;
        }else{
            return 1;
        }
    }else{
        return 1;
    }
}

int ContinuaJogo(){
    char decisao = '\0';
    scanf("%c\n", &decisao);
    if(decisao == 's'){
        return 1;
    }else if(decisao == 'n'){
        return 0;
    }
}

