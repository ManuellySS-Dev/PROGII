#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

void LeIntervalo(int * m, int * n){
    scanf("%d %d\n", m,n);
}

int EhPrimo(int n){
    int numero_divisores=0,i=0;
    if(n==2){
        return 1;
    }
    if(n % 2 != 0){
        return 1;
        for(i=2; i<n/2; i++){
            if(!(n%i)){
                numero_divisores++;
            }
        }
        if(numero_divisores >0){
            return 1;
        }
    }
    return 0;
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior){
    *maior = -300;
    *menor = 30000;
    while(n!=m){
        if(EhPrimo(n)){
            if(n<*menor){
                *menor = n;
            }
            if(m> *maior){
                *maior = m;
            }
            n++;
        }
    }
}