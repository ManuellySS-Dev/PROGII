#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void LeDadosParaVetor(int * vet, int tam){
    int i=0;
    for(i=0; i<tam; i++){
        scanf("%d ", vet);
    }
}

void ImprimeDadosDoVetor(int * n, int tam){
    int i=0;
    for(i=0; i<tam; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
}

void TrocaSeAcharMenor(int * vet, int tam, int * paraTrocar) {
    int i;
    // O 'paraTrocar' guarda a posição (índice) que a gente está analisando no momento
    int indiceMenor = *paraTrocar; 

    // Procura no restante do vetor se há alguém menor do que o elemento na posição 'indiceMenor'
    for (i = *paraTrocar + 1; i < tam; i++) {
        if (vet[i] < vet[indiceMenor]) {
            indiceMenor = i; // Atualiza o índice do menor valor encontrado
        }
    }

    // Se encontramos um índice cujo valor é menor, atualizamos a variável original lá fora
    if (indiceMenor != *paraTrocar) {
        // Opcional dependendo da sua estrutura, mas para trocar os valores:
        int aux = vet[*paraTrocar];
        vet[*paraTrocar] = vet[indiceMenor];
        vet[indiceMenor] = aux;
    }
}

void OrdeneCrescente(int * vet, int tam) {
    int i;
    
    // Passa por cada elemento do vetor
    for (i = 0; i < tam - 1; i++) {
        // Criamos uma variável para guardar a posição atual (i)
        int posAtual = i;
        
        // Chamamos a função passando o ENDEREÇO (&) de posAtual, 
        // para que a função possa alterá-lo ou usá-lo via ponteiro (int * paraTrocar)
        TrocaSeAcharMenor(vet, tam, &posAtual);
    }
}