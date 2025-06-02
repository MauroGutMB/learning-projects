#include <stdio.h>

int main(){

  int given_array[] = {1, 2, 4, 9, 14, 12, 3, 5};
  int size_array = sizeof(given_array) / sizeof(given_array[0]);

  int target;

  printf("Give an target --> ");
  scanf("%i", &target);
  
  for(int i = 0; i < size_array; i++){
    for(int j = 0; j < size_array; j++){
      
      if(i != j){
        if(given_array[i] + given_array[j] == target){
          printf("The target was found with the sum of Indexes: %i, %i\n", i, j);
          printf("Because the sum of %i + %i is %i.\n", given_array[i], given_array[j], given_array[i] + given_array[j]);
          printf("Given array:\n");

          printf("[");
          for(int x = 0; x < size_array; x++){
            printf("%i", given_array[x]);
            if(x != size_array - 1){
              printf(", ");
            }
          }
          printf("]");

          return 0;
        } 
      }

    }
  }

  printf("The target was not found.\n");
  printf("Given array:\n");

  printf("[");
  for(int x = 0; x < size_array; x++){
    printf("%i", given_array[x]);
    if(x != size_array - 1){
      printf(", ");
    }
  }
  printf("]");

  return 0;
}
