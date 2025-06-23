/*
Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
a.        Horário: composto de hora, minutos e segundos.
b.        Data: composto de dia, mês e ano.
c.        Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <stdio.h>

typedef struct{
  int hora;
  int minutos;
  int segundos;
}Horario;

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct{
  Data data;
  Horario horario;
  char* descr;
}Compromisso;

int main(){

  Compromisso comp1;

  comp1.horario.hora = 13;
  comp1.horario.minutos = 45;
  comp1.horario.segundos = 30;

  comp1.data.dia = 25;
  comp1.data.mes = 7;
  comp1.data.ano = 2025;

  comp1.descr = "Uma descrição do compromisso.";

  printf("Data: %02i/%02i/%i\n", comp1.data.dia, comp1.data.mes, comp1.data.ano);
  printf("Horario: %02i:%02i:%i\n", comp1.horario.hora, comp1.horario.minutos, comp1.horario.segundos);
  printf("%s", comp1.descr);
  
  return 0;
}
