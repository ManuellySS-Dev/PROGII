#include "string_utils.h"

int string_length(char *str){
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        tamanho++;
    }
    return tamanho;
}

void string_copy(char *src, char *dest){
    int tamanho = 0;
    while(src[tamanho] != '\0'){
        dest[tamanho] = src[tamanho];
        tamanho++;
    }
    dest[tamanho] = '\0';
    printf("String copiada: %s\n", dest);
}

void string_upper(char *str){
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        if(str[tamanho] >= 'a' && str[tamanho] <= 'z'){
            str[tamanho] = str[tamanho] - 32;
        }
        tamanho++;
    }
    printf("String convertida para maiusculas: %s\n", str);
}

void string_lower(char *str){
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        if(str[tamanho] >= 'A' && str[tamanho] <= 'Z'){
            str[tamanho] = str[tamanho] + 32;
        }
        tamanho++;
    }  
    printf("String convertida para minusculas: %s\n", str);
}

void string_reverse(char *str){
    int tamanho=0, i=0;
    printf("String invertida: ");
    tamanho = string_length(str);
    for(i=(tamanho-1); i>=0; i--){
        printf("%c", str[i]);
    }
        printf("\n");
}