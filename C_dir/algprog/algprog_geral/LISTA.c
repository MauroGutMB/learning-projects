#include <stdio.h>

int main(){

  int nums[] = {14, 10, 2, 9, 5, 13, 7, 12, 4, 15, 6, 8, 3, 11, 1};
  int tamanho = sizeof(nums)/sizeof(nums[0]);
  int temp;

  for(int i = 0; i < tamanho; i++){

    for(int k = 0; k < tamanho; k++){
      printf("%02i ", nums[k]);
    }
    
    printf("\tOrg: %i", i + 1);

    for(int j = 0; j < tamanho - 1; j++){
      
      if(nums[j] > nums[j+1]){
        temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    } 

    printf("\n");
  }

  printf("\n");

  for(int i = 0; i < tamanho; i++){
    printf("%02i ", nums[i]);
  }

  printf("\tResultado.");
}
