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

void TrocaSeAcharMenor(int * vet, int tam, int * paraTrocar){
    int i=0, menor=-3000;
    for(i=0; i<tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    if(menor < *paraTrocar){
        *paraTrocar = menor;
    }
}

void OrdeneCrescente(int * vet, int tam){
    int i=0, j=0;
    for(i=0; i<tam; i++){
        for(j=i; j<tam-1; j++){
            TrocaSeAcharMenor(vet,tam, vet[j]);
        }
    }
}