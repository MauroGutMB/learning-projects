#include <stdio.h>

int main() {
    int nums[] = {6, 9, 9, 4, 2, 2, 4, 6, 9, 2, 6, 9, 6, 9, 2, 4, 6, 2, 9, 4, 7};
    int tam = sizeof(nums) / sizeof(nums[0]);

    int contado[tam];
    for (int i = 0; i < tam; i++) {
        contado[i] = 0;
    }

    printf("Elemento | Vezes\n");
    printf("-----------------\n");

    for (int i = 0; i < tam; i++) {
        if (contado[i] == 1)
            continue;

        int conta = 1;
        for (int j = i + 1; j < tam; j++) {
            if (nums[i] == nums[j]) {
                conta++;
                contado[j] = 1;
            }
        }

        printf("   %d     |   %d\n", nums[i], conta);
    }

    return 0;
}
