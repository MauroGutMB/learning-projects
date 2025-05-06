#include <stdio.h>

// Converts a digit char to its numeric value (supports 0-9, A-F)
int charToDigit(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return 10 + (c - 'A');
    if (c >= 'a' && c <= 'f') return 10 + (c - 'a');
    return -1; // Invalid
}

// Converts a number (0-15) to its char representation
char digitToChar(int d) {
    if (d >= 0 && d <= 9) return '0' + d;
    if (d >= 10 && d <= 15) return 'A' + (d - 10);
    return '?'; // Invalid
}

// Converts a string number in [fromBase] to decimal
long long toDecimal(char *num, int fromBase) {
    long long decimal = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        int digit = charToDigit(num[i]);
        if (digit == -1 || digit >= fromBase) {
            printf("Invalid number for base %d!\n", fromBase);
            return -1;
        }
        decimal = decimal * fromBase + digit;
    }
    return decimal;
}

// Converts decimal to [toBase] and prints it directly
void fromDecimal(long long decimal, int toBase) {
    if (decimal == 0) {
        printf("0");
        return;
    }
    
    // Store digits in reverse order
    char digits[50];
    int index = 0;
    
    while (decimal > 0) {
        digits[index++] = digitToChar(decimal % toBase);
        decimal /= toBase;
    }
    
    // Print in correct order (reverse of stored digits)
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", digits[i]);
    }
}

int main() {
    char num[50];
    int fromBase, toBase;
    
    printf("Enter number: ");
    scanf("%s", num);
    
    printf("Enter current base (2-16): ");
    scanf("%d", &fromBase);
    
    printf("Enter target base (2-16): ");
    scanf("%d", &toBase);
    
    if (fromBase < 2 || fromBase > 16 || toBase < 2 || toBase > 16) {
        printf("Bases must be between 2 and 16.\n");
        return 1;
    }
    
    long long decimal = toDecimal(num, fromBase);
    if (decimal == -1) return 1;
    
    printf("Result: ");
    fromDecimal(decimal, toBase);
    printf("\n");
    
    return 0;
}
