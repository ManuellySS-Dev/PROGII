#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int * vetor;
    int tamanho=0;
    scanf("%d", &tamanho);

    vetor = CriaVetor(tamanho);
    LeVetor(vetor, tamanho);
    printf("%.2f\n", CalculaMedia(vetor, tamanho));
    LiberaVetor(vetor);

    return 0;
}