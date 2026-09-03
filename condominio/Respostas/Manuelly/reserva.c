#include "area.h"
#include "morador.h"
#include "data.h"
#include "reserva.h"
#include <string.h>
#include <stdio.h>

Reserva criaReserva(Morador morRes, Area aRes, Data dRes, int qtdConvidados){
    Reserva reserva;
    reserva.morador = morRes;
    reserva.area = aRes;
    reserva.data = dRes;
    reserva.qtdConvidados = qtdConvidados;
    return reserva;
}

int verificaSolicitacaoReserva(Reserva *agendaReservas, int nRes, Morador morRes, Area aRes, Data dRes, int qtdConvidados){

}

void imprimeReserva(Reserva r){
int taxa_de_ocupacao = 0;

taxa_de_ocupacao = ((r.qtdConvidados/r.area.capacidade)*100);

printf("--------- RESERVA -----------\n");
printf("Morador: \n");
imprimeMorador(r.morador);
printf("\n");
imprimeArea(r.area);
printf("Data da reserva: ");
imprimeData(r.data);
printf("\n");
printf("Quantidade de convidados: %d\n",r.qtdConvidados);
printf("Taxa de ocupação: %f%\n", taxa_de_ocupacao);
printf("------------------------------\n");
}