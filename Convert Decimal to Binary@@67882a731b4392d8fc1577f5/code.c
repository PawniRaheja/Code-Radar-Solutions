#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32]; 
    int i = 0;
    
    if (num == 0) {
        printf("0\n");
        return;
    }
    
    while (num > 0) {
        binary[i] = num & 1;  // Get the least significant bit
        num >>= 1;            // Right shift by 1
        i++;
    }
    
    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}