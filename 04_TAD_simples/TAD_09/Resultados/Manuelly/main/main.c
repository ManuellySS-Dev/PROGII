#include <stdio.h>
#include "funcionario.h"
#include "empresa.h"

int main(){
    int qtd_empresas=0, qtd_funcionario=0, i=0, j=0, id_empresa=0,qtd_funcionarios=0;
    tFuncionario funcionario;
    scanf("%d", &qtd_empresas);
    tEmpresa empresa[qtd_empresas];
    for(i=0; i<qtd_empresas; i++){
        empresa[i] = leEmpresa();
        scanf(" %d", &qtd_funcionario);
        printf("%d", qtd_funcionario);
        for(j=0; j<empresa[i].qtdFuncionarios; j++){
            funcionario = leFuncionario();
            imprimeFuncionario(funcionario);
            empresa[i] = contrataFuncionarioEmpresa(empresa[i], funcionario);
        }
    }
    for(i=1; i<= qtd_empresas; i++){
        imprimeEmpresa(empresa[i]);
    }
    return 0;
}