#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void showArray(int arr[], int size);
int verifyElement(int arr[], int size, int element);
int countTimes(int arr[], int size, int element);
void removeElement(int arr[], int newArr[], int size, int element);

int main(){

  srand(time(NULL));

    int vet[15];
  int size = sizeof(vet) / sizeof(vet[0]);

  for(int i = 0; i < size; i++){
    vet[i] = rand() % 11;
  }

  int element;

  showArray(vet, size);

  printf("Select an element to remove --> ");
  scanf("%i", &element);

  if(verifyElement(vet, size, element) == 1){
    int nTimes = countTimes(vet, size, element);
    printf("The element was found in the verified array.\n");
    printf("The element was found %i times.\n", nTimes);
  } else{
    printf("The element was not found in the verified array.");
    return 1;
  }

  int nTimes = countTimes(vet, size, element);
  int newSize = size - nTimes;
  int newVet[newSize];
  removeElement(vet, newVet, size, element);

  showArray(newVet, newSize);

  return 0;
}

void showArray(int arr[], int size){
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%i", arr[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n");
}

int verifyElement(int arr[], int size, int element){
  for(int i = 0; i < size; i++){
    if(arr[i] == element){
      return 1;
    }
  }
  return 0;
}

int countTimes(int arr[], int size, int element){
  int counter = 0;
  for(int i =0; i < size; i++){
    if(element ==  arr[i]){
      counter++;
    }
  }
  return counter;
}

void removeElement(int arr[], int newArr[], int size, int element){
  int aux = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] != element){
      newArr[aux] = arr[i];
      aux++;
    }
  }
}
