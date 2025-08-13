#include <stdio.h>

int main(){

  int jogadores[4];
  int forcas_possiveis[6];
  int ind_forcas = 0;
  int time_1 = 0;
  int time_2 = 0;

  int soma_nivel = 0;
  int menor_dif = 0;

  int menor_forca = 0;
  int menor_forca_id = 0;


  int maior_forca = 0;
  int maior_forca_id = 0;

  for(int i = 0; i < 4; i++){
    scanf("%i", &jogadores[i]);

    if(jogadores[i] < 0){
      jogadores[i] = 0;
    }

    soma_nivel += jogadores[i];

    if(i == 0){
      maior_forca = jogadores[i];
      menor_forca = jogadores[i];
    }

    if(jogadores[i] > maior_forca){
      maior_forca = jogadores[i];
      maior_forca_id = i;
    }

    if(jogadores[i] < menor_forca){
      menor_forca = jogadores[i];
      menor_forca_id = i;
    }

  }

  for(int i = 0; i < 4; i++){
    for(int j = i; j < 4; j++){

      int forca_dupla = 0;

      if(i != j){
        forca_dupla = jogadores[i] + jogadores[j];

        forcas_possiveis[ind_forcas] = forca_dupla;
        ind_forcas++;
      }
    } 
  }

  int forca_intermediaria = 0;

  for(int i = 0; i < 4; i++){
    int d1 = menor_forca_id;
    int d2 = maior_forca_id;

    int forca_Maior_Menor = jogadores[d1] + jogadores[d2];

    for(int j = i; j < 4; j++){

      if((d1 != i && d2 != j) && (d1 != j && d2 != i) && (i != j)){
        forca_intermediaria = jogadores[i] + jogadores[j];
      }

    }

    time_1 = forca_Maior_Menor;
    time_2 = forca_intermediaria;
  }

  menor_dif = time_1 - time_2;
  if(menor_dif < 0){
    menor_dif *= -1;
  }

  printf("%i", menor_dif);


  return 0;
}
