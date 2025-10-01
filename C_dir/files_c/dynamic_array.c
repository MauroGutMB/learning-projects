#include <stdio.h>
#include <stdlib.h>

/*int* createArray(int size) {
	int * array = (int*)malloc(size * sizeof(int));
	return array;
	//standalone method
}*/

typedef struct {
	float* array;
	int size;
}floatArray;

floatArray createArray(int size) {
	floatArray array;
	array.array = (float*)malloc(size * sizeof(float));
	array.size = size;
	return array;
}

int resizeArray(floatArray* p_array, int size_new) {
	float* temp_size = realloc((*p_array).array, size_new * sizeof(float));
	if(temp_size == NULL) {
		return 0;
	}
	(*p_array).array = temp_size;
	(*p_array).size = size_new;
	return 1;
}

void freeArray(floatArray* p_array) {
	free((*p_array).array);
    	(*p_array).array = NULL;
    	(*p_array).size = 0;
}

float averageArray(int n, float* array){
	float result = 0.0f;
	if(n == 0) return 0.0f;
	for(int i = 0; i < n; i++){
		result += array[i];
	}
	return result/n;
}

float varianceArray(int n, float* array, float average){
	float result = 0.0f;
	for(int i = 0; i < n; i++){
		result += (array[i] - average) * (array[i] - average);
	}
	return result/n;
}

float sumArray(int n, float* array){
	float sum = 0.0f;
	for(int i = 0; i < n; i++){
		sum += array[i];
	}
	return sum;
}

void clearBuffer(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int getMenuOption(const char *input, int min, int max){
	int opt, input_stts;

	while(1){
		printf("%s", input);
		input_stts = scanf("%i", &opt);
        	clearBuffer();
        	if(input_stts == 1){
			if(opt >= min && opt <= max){
				return opt;
			}
			else{
				printf("ERROR! Choose an option between %i and %i!\n", min, max);
            		}
        	}
		else{
			printf("ERROR! Please enter a valid number!\n");
		}
	}
}

float getFloat(const char *input, int n){
	float num;
	int input_stts;
	
	while(1){
		printf("%s%d value: ", input, n);
		input_stts = scanf("%f", &num);
		clearBuffer();
		if(input_stts == 1){
			return num;
		}
		else{
			printf("ERROR! Please enter a valid number!\n");
		}
	}
}

int getInt(const char *input){
	int num, input_stts;
	
	while(1){
		printf("%s", input);
		input_stts = scanf("%d", &num);
		if(input_stts){
			return num;
		}
		else{
			printf("ERROR! Please enter a valid number!\n");
		}
	}
}

void getArrayInput(int n, floatArray* p_array){
	for(int i = 0; i < (*p_array).size; i++){
		(*p_array).array[i] = getFloat("Enter the ", i + 1);
	}
}

void printMenu(void){
	printf("+----------------------------+\n");
	printf("| 1 - Average                |\n");
	printf("| 2 - Variance               |\n");
	printf("| 3 - Array Sum              |\n");
	printf("| 4 - Exit                   |\n");
	printf("+----------------------------+\n");
}

int main(void) {
	int option, default_size = 3;
	floatArray result_array = createArray(default_size);
	do{
		printMenu();
		option = getMenuOption("Choose an option: ", 1, 4);

		switch(option){
			case 1: {
				int size = getInt("Enter the amount of values: ");
				if(size != result_array.size){
					int resize_stts = resizeArray(&result_array, size);
					if(!resize_stts){
						printf("ERROR! Array got nuked!\n");
						break;
					}
					else{
						printf("Shit going smooth\n");
					}
				}
				
				getArrayInput(result_array.size, &result_array);
				float average = averageArray(result_array.size, result_array.array);
				printf("Average of the array: %.3f\n", average);
				break;
			}
			case 2: {
				int size = getInt("Enter the amount of values: ");
				if(size != result_array.size){
					int resize_stts = resizeArray(&result_array, size);
					if(!resize_stts){
						printf("ERROR! Array got nuked!\n");
						break;
					}
					else{
						printf("Shit going smooth\n");
					}
				}
				
				getArrayInput(result_array.size, &result_array);
				float average = averageArray(result_array.size, result_array.array);
				float variance = varianceArray(result_array.size, result_array.array, average);
				printf("Variance of the array: %.3f\n", variance);
				break;
			}
			case 3: {
				int size = getInt("Enter the amount of values: ");
				if(size != result_array.size){
					int resize_stts = resizeArray(&result_array, size);
					if(!resize_stts){
						printf("ERROR! Array got nuked!\n");
						break;
					}
					else{
						printf("Shit going smooth\n");
					}
				}
		
				getArrayInput(result_array.size, &result_array);
				float sum = sumArray(result_array.size, result_array.array);
				printf("Sum of the array: %.3f\n", sum);
				break;
			}
			case 4: {
				printf("Exiting...");
				break;
			}
			default:
				printf("Shit got nuked, brace for impact lil bro :3");
				return 0;
		}	
	}while(option >= 1 && option <=3);
	
	freeArray(&result_array);
	return 0;
}